#include <iostream>
using namespace std;

class Base{
    public:
        Base(){
            cout << "'Base' class constructor is called" << endl;
        }
        // ~Base(){
        virtual ~Base(){
            cout << "'Base' class destructor is called" << endl;
        }
};

class Derived: public Base{
    public:
    Derived(){
        cout << "'Derived' class constructor is called" << endl;
    }
    ~Derived(){
        cout << "'Derived' class destructor is called" << endl;
    }
};

int main(){
    Base *a;
    Derived b;
    a = &b;
    return 0;
}