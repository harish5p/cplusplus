#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string s;
    ifstream f;
    f.open("dir.txt");
    while(!f.eof()){
        // f >> s;
        getline(f, s);
        cout << s << endl;
    }
    f.close();
    return 0;
}