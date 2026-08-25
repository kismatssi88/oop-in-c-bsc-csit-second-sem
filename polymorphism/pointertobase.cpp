#include <iostream>
using namespace std;
 
class Shape {
public:
    virtual void display() {           // virtual enables polymorphic behaviour
        cout << "This is a generic Shape" << endl;
    }
};
 
class Rectangle : public Shape {
public:
    void display() override {
        cout << "This is a Rectangle" << endl;
    }
};
 
class Circle : public Shape {
public:
    void display() override {
        cout << "This is a Circle" << endl;
    }
};
 
int main() {
    Rectangle r;
    Circle c;
 
    Shape* ptr;              // ONE base class pointer, reused for different objects
 
    ptr = &r;
    ptr->display();          // runs Rectangle's display() at runtime
 
    ptr = &c;
    ptr->display();          // runs Circle's display() at runtime
 
    return 0;
}
