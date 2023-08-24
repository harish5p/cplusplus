#include <iostream>

using namespace std;

int main(){
    char operation;
    int a, b;

    cout << "Enter arithmetic operation (+, - , *, /, %):" << endl;
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (operation){
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0){
                cout << "Result: " << (float)a / (float)b << endl;
            } else {
                cout << "Division by 0 is not possible" << endl;
            }            
            break;
        case '%':
            cout << "Result: " << a % b << endl;
            break;  

        default:
            cout << "Error: Invalid operator. Select from (+, - , *, /, %)"  << endl;
            break;

    }
}