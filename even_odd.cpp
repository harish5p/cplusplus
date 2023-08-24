#include <iostream>

using namespace std;
int main(){
    int a;
    // expecting only integers as mentioned in the question
    //  and hence ignored the case for floats

    cout << "Enter an integer" << endl;
    cin >> a;

    if (a == 0){
    cout << "Number is 0" << endl;
    } else if (a % 2 == 0){
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
    
    return 0;
}