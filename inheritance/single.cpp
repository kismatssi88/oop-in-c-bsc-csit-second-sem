#include <iostream>
using namespace std;
 
class Shape {
public:
    string shapeName;
    void setName(string n)
     { shapeName = n; }
};
 
class Rectangle : public Shape {
private:
    double length, width;
public:
    void setDimensions(double l, double w) { length = l; width = w; }
    double getArea() { return length * width; }
    void display() {
        cout << "Shape: " << shapeName << endl;
        cout << "Area of Rectangle: " << getArea() << endl;
    }
};
 
int main() {
    Rectangle r;
    r.setName("Rectangle");     // function from base class Shape
    r.setDimensions(5.0, 3.0);  // function from derived class
    r.display();
    return 0;
}
