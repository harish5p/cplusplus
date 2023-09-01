#include <iostream>

using namespace std;

// void eligibility(int);
void eligibility(int age){
    if (age >= 18){
        cout << "Congratulations! You're eligible to vote" << endl;
    } else {
        cout << "You're currently ineligible to vote" << endl;
    }
}

int main() {
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    eligibility(age);

    return 0;
}

