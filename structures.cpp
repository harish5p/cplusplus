#include <iostream>
#include <string>

using namespace std;

struct BankAccount{
    string name;
    int age;
    float balance;
};

int main(){
    BankAccount account1;

    account1.name = "Random";
    account1.age = 18;
    account1.balance = 1000;

    cout << "Name: " << account1.name << endl;
    cout << "Age: " << account1.age << endl;
    cout << "Balance: " << account1.balance << endl;

    return 0;



}