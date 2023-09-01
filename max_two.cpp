#include <iostream>

using namespace std;

void max_two(float, float);

int main(){
    float a, b;

    cout << "Enter two numbers: "<< endl;
    cin >> a >> b ;

    max_two(a, b);
    
}

void max_two(float a, float b){
    if (a > b){
        cout << "The maximum value among " << a << " and " 
        << b << " is: " << a << endl;

    } else if( a< b){
        cout << "The maximum value among " << a << " and " 
        << b << " is: " << b << endl;

    } else{
        cout << "Both numbers are equal" << endl;

    }

}