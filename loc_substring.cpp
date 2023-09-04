#include <iostream>

using namespace std;

int main(){
    char main_str[50];
    char sub_str[50];
    cout << "Enter main string and sub string respectively: " << endl;
    cin.getline(main_str, sizeof(main_str));
    cin.getline(sub_str, sizeof(sub_str));

    char *main_ptr1 = main_str;
    char *main_ptr, *sub_ptr;

    if (!sub_str[0]){
        cout << "String found at" << endl << main_ptr1 << endl;
        return 0;
    }
    while (*main_ptr1){
        main_ptr = main_ptr1;
        sub_ptr = sub_str;
        while (*main_ptr && *sub_ptr && (*main_ptr == *sub_ptr)){
            main_ptr++;
            sub_ptr++;
        }
        if (!*sub_ptr){
            cout << "string found at: " << main_ptr1 << endl;
            return 0;
        }
        main_ptr1++;
    }
    cout << "String not found";

    return 0;
}