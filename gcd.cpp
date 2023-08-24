#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Enter the first natural number: ";
    cin >> a;

    cout << "Enter the second natural number: ";
    cin >> b;

    int gcd = 1;

    int smaller = (a < b) ? a : b;

    for (int i =1; i <= smaller; i++ ){
        if (a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;

    return 0;
}