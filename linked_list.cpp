#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> linked_list = {1,2,3,4,5};

    cout << "Original Linked list: " << endl;
    for (int x: linked_list){
        cout << x << " ";
    }
    cout << endl;
    linked_list.push_back(6);
    linked_list.push_front(0);
    cout << "New Linked list " << endl;
    for (int x: linked_list){
        cout << x << " ";
    }
    cout << endl;

    linked_list.pop_back();
    linked_list.pop_front();
    cout << "Back to original linked list: " << endl;
    for (int x: linked_list){
        cout << x << " ";
    }
    cout << endl;
    return 0;

}