#include <iostream>
using namespace std;

class Box {
private:
    int length, width, height;

public:
    // Constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Function to calculate volume
    int volume() {
        return length * width * height;
    }

    // Overload * operator
    int operator*(Box b) {
        return volume() * b.volume();
    }
};

int main() {
    Box box1(2, 3, 4);
    Box box2(2, 4, 5);

    int result = box1 * box2;

    cout << "Volume of Box 1: " << box1.volume() << endl;
    cout << "Volume of Box 2: " << box2.volume() << endl;
    cout << "Multiplication of volumes: " << result << endl;

    return 0;
}