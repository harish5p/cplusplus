#include <iostream>
using namespace std;

class Time {
    private:
        int hours, minutes, seconds;        
    public:
        Time() : hours(0), minutes(0), seconds(0){}  
        void input(){
            cout << "Enter hour, minute and seconds part respectively: " << endl;
            cin >> hours >> minutes >> seconds;
        }      
        Time operator + (const Time& other) {
            Time temp;
            int total_seconds = hours * 3600 + minutes * 60 + seconds +
                                other.hours *3600 + other.minutes * 60 + other.seconds;
            temp.hours = total_seconds/3600;
            int remaining_seconds = total_seconds % 3600;
            temp.minutes = remaining_seconds / 60;
            temp.seconds = remaining_seconds % 60;
            return temp;
        }
        void output(){
            cout << "Time is: " << hours << " hours " << minutes <<
            " minutes " << seconds << " seconds " << endl;
        }
};
int main() {    
    Time time1, time2, result;

    cout << "Enter first time having hours, minutes, seconds " << endl;
    time1.input();

    cout << "Enter second time having hours, minutes, seconds " << endl;
    time2.input();

    result = time1 + time2;
    result.output();
    
    return 0;
}