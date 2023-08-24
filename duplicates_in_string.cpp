#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;

    cout << "Enter a string: ";
    getline(cin, input); 

    cout << "Duplicates in the input: ";

    for (int i=0; i < input.length(); i++){
        for (int j=i+1; j < input.length(); j++){
            if (input[i] == input[j]){
                cout << input[i] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}