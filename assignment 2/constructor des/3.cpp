// 3. Parameterized Constructor
// Write a C++ program to create a class Circle with:
//  Data member: radius.
//  A parameterized constructor to initialize the radius.
//  A function to calculate and display the area.

#include<iostream>
using namespace std;

class Circle {
    private:
        float radius;
    
    public:
        Circle(float r) {
            radius = r;
        }

        void display() {
            float area = 3.14 * radius * radius;
            cout << "Area: "<< area;
        }
};

int main() {
    Circle c(3);
    c.display();
}