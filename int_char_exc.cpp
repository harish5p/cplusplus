#include <iostream>
using namespace std;
int main(){
    char cha;
    cout << "Enter 'i' for integer exception, 'c' for character exception, anything else for default exception" << endl;
    cin >> cha;
    try{
        if (cha == 'i'){
            throw 1;
        } else if (cha == 'c'){
            throw 'a';
        } else {
            throw .1;
        }

    } catch (int e) {
        cout << "Integer exception" << endl;
    } catch (char e) {
        cout << "Character exception" << endl;
    } catch (...) {
        cout << "Default exception" << endl;
    }
    return 0;
}