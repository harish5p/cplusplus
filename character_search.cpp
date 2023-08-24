#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    char target;
    cout <<  "Enter the string: ";
    getline(cin, input);
    cout << "Enter the character to search: ";
    cin >> target;

    int position = -1;

    for (int i=0; i < input.length(); i++){
        if (input[i] == target){
            position = i;
            break;
        }
    }

    if (position != -1){
        cout << "Character " << target <<   " found at position " << position << endl;
    } else{
        cout << "Character not found" << endl;
    }
    return 0;
}