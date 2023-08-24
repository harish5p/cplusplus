#include <iostream>

using namespace std;

int main(){
    cout << "The perfect numbers between 1 to 500 are: "<< endl;

    for (int num=1; num<=500; num++) {
        int sum = 0;

        for (int divisor=1; divisor <= num/2; divisor++){
            if (num % divisor == 0){
                sum += divisor;                
            }
        }

        if (sum == num){
            cout << num << " ";
        }
    }
    return 0;

}