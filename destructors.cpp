#include <iostream>
using namespace std;

class Destructor {
    public:
        Destructor(){
            cout << "This is a constructor for 'Destructor' class" << endl;
        }
        ~Destructor(){
            cout << "This is a destructor for 'Destructor' class" << endl;
        }
};

int main(){
    Destructor d;
    return 0;
}