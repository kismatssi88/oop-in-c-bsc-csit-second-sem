#include <iostream>
using namespace std;
 
class Shape {                 // ABSTRACT class
public:
    virtual float area() = 0; // pure virtual function -- no implementation here
};
 
class Circle : public Shape {
private:
    float radius;
public:
    void setRadius(float r) { radius = r; }
    float area() override { return 3.1416f * radius * radius; }
};
 
class Rectangle : public Shape {
private:
    float length, width;
public:
    void setDimensions(float l, float w) { length = l; width = w; }
    float area() override { return length * width; }
};
 
int main() {
    // Shape s;                 // ERROR if uncommented: cannot instantiate an abstract class
 
    Circle c;
    c.setRadius(4);
    Rectangle r;
    r.setDimensions(5, 3);
 
    Shape* shapes[2];          // abstract class used as a pointer type -- this IS allowed
    shapes[0] = &c;
    shapes[1] = &r;
 
    for (int i = 0; i < 2; i++) {
        cout << "Area: " << shapes[i]->area() << endl;
    }
    return 0;
}
