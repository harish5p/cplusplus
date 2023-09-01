#include <iostream>

using namespace std;

class Reversed {
    public:
        int reverse(int n){
            int rev = 0;
            while (n!=0){
                rev = rev*10 + n%10;
                n /=10;
            }
            return rev;

        }

};

int main(){
    Reversed a;
    int b ;

    cin >> b;
    cout << "Reverse of " << b << " is: " << a.reverse(b) << endl;

    return 0;
}