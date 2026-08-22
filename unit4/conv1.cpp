#include <iostream>
using namespace std;

class Length {
    float meters;

public:
    // Constructor: converts float into Length object
    Length(float m) {
        meters = m;
    }

    // Display function
    void display() {
        cout << "Length = " << meters << " meters" << endl;
    }
};

int main() {
    float m = 10.5;

    // float is converted into Length object
    Length l = m;

    l.display();

    return 0;
}