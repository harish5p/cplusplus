#include <iostream>

using namespace std;

int main(){
    const char* main_str = "This is the main string";
    const char* sub_str = "string";

    cout << "Main String: " << main_str <<endl;
    cout << "Sub string: " << sub_str << endl;

    const char* ptr = main_str;
    int index = 0;
    while (*ptr) { 
        const char* sub_ptr = sub_str; 
        const char*  main_ptr = ptr; 

        while (*main_ptr && *sub_ptr && (*main_ptr == *sub_ptr)){
            
            main_ptr++;
            sub_ptr++;
        }
        if (!*sub_ptr){
            cout << "Substring found at index: " << index << endl;
        }
        ptr++;
        index++;

    }
    return 0;
}