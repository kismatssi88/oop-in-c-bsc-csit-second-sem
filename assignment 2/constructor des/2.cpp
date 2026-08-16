// 2. Default Constructor
// Write a C++ program to create a class Rectangle with:
//  Data members: length and width.
//  A default constructor that assigns both length and width to 1.
//  A function to calculate and display the area.
// Demonstrate object creation without passing parameters.

#include<iostream>
using namespace std;

class Rectangle {
    private:
        int lenght;
        int width;

    public:
        Rectangle() {
            lenght = 2;
            width = 3;
        }

        void displayArea() {
            int area = lenght * width;
            cout << "Area: " << area;
        }
};

int main() {
    Rectangle r;
    r.displayArea();

    return 0;
}