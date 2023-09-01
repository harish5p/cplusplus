#include <iostream>
using namespace std;

class Factorial{
    public:
        int factorial(int a){
            int fac =1;
            if (a >0){
                for (int x=1; x<=a; x++){
                    fac *= x;
                }
                return fac;
            } else if (a == 0){
                return 1;
            } else  {
                cout << "Factorial not possible for the input" << endl;
                return 0;
            }            
        }
};

int main(){
    Factorial f;
    int input, result;

    cin >> input;
    result = f.factorial(input);
    if (result != 0){
    cout << "Factorial of " << input << " is: " << result << endl;
    }
    return 0;
}