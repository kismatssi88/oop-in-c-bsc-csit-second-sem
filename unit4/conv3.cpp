#include <iostream>
using namespace std;

class Celsius {
    float temperature;

public:
    Celsius(float t) {
        temperature = t;
    }

    float input() {
        return temperature;
    }
};

class Fahrenheit {
    float temperature;

public:
    // Conversion constructor
    Fahrenheit(Celsius c) {
        temperature = (c.input() * 9 / 5) + 32;
    }

    void display() {
        cout << "Temperature in Fahrenheit = "
             << temperature << " F" << endl;
    }
};

int main() {
    Celsius C1(25);

    // Celsius object converted to Fahrenheit object
    Fahrenheit F1 = C1;

    F1.display();

    return 0;
}