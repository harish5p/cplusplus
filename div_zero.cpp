#include <iostream>
using namespace std;

int main(){
    float num, den, result;
    cout << "Enter Numerator and Denominator respectively" << endl;
    cin >> num >> den;

    try{
        if (den==0){
            throw 1;
        } else{
            result = num/den;
            cout << "Result: " << result << endl;
        }
        
    } catch (int e) {
        cout << "Division by zero not possible" << endl;
    }
    


    return 0;
}