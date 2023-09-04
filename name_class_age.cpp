#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string name, class_name;
    int age;

    cout << "Enter student's name: " << endl;
    getline(cin, name);

    cout << "Enter student's class: " << endl;
    getline(cin, class_name);

    cout << "Enter student's age: " << endl;
    cin >> age;

    ofstream f;
    f.open("dir.txt", ios::app);
    f << <name> <class_name> <age> ;
    f.close();

    return 0;
}