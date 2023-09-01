#include <iostream>

using namespace std;

float area(float r){
    return 3.14 * r * r;
}

float area(float l, float b){
    return l*b;
}

int main(){
    float r, l, b;

    cout << "Enter radius of circle: " << endl;
    cin >> r;
    cout << "Area of the circle is: " << area(r) << endl;

    cout << "Enter lenght and breadth of rectangle" << endl;
    cin >> l >> b;
    cout << "Area of the rectangle is: " << area(l,b) << endl;


    return 0;
}