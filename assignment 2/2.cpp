#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
    float area;

public:
    // Function to input length and width
    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    // Function to calculate area
    void calculateArea()
    {
        area = length * width;
    }

    // Function to display area
    void displayArea()
    {
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    // Creating an object of Rectangle class
    Rectangle r;

    // Accessing public member functions using dot operator
    r.input();
    r.calculateArea();
    r.displayArea();

    return 0;
}