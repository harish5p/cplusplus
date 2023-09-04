#include <iostream>
using namespace std;
class Area{
    public:
    virtual float getArea() = 0;
};
class Rectangle: public Area{    
    public:
        float l, b;
        Rectangle(float length , float breadth): l(length), b(breadth){}
        float getArea(){
            return l*b;
        }
};
class Triangle: public Area {
    public:
        float b, h;
        Triangle(float base, float height): b(base), h(height){}
        float getArea(){
            return 0.5 * b * h;
        }
};

int main(){
    Rectangle rect(2,5);
    cout << "Area of rectangle is: " << rect.getArea() << endl;

    Triangle tri(2,5);
    cout << "Area of triangle is: " << tri.getArea() << endl;
    return 0;
}