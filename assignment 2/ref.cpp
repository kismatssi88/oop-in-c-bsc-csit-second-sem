#include <iostream>
using namespace std;

class Square;  // Forward declaration

class Rectangle {
private:
    float length, breadth;

public:
    void input() {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }

    // Declare friend function
    friend float totalArea(Rectangle, Square);
};

class Square {
private:
    float side;

public:
    void input() {
        cout << "Enter side of square: ";
        cin >> side;
    }

    // Declare friend function
    friend float totalArea(Rectangle, Square);
};

// Friend function definition
float totalArea(Rectangle r, Square s) {
    float rectangleArea = r.length * r.breadth;
    float squareArea = s.side * s.side;

    return rectangleArea + squareArea;
}

int main() {
    Rectangle r;
    Square s;

    r.input();
    s.input();

    cout << "Total Area = " << totalArea(r, s) << endl;

    return 0;
}