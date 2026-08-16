#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    // Function to input radius
    void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    // Function to calculate and display area
    void displayArea()
    {
        float area = 3.14159 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

int main()
{
    // Dynamically create an object using new
    Circle *c = new Circle;

    // Access member functions using arrow operator
    c->input();
    c->displayArea();

    // Deallocate memory using delete
    delete c;

    return 0;
}