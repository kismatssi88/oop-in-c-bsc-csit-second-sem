#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    // Function to input distance
    void inputDistance() {
        cout << "Enter feet: ";
        cin >> feet;

        cout << "Enter inches: ";
        cin >> inches;
    }

    // Function to display distance
    void displayDistance() {
        cout << feet << " feet " << inches << " inches" << endl;
    }

    // Pass by value
    void changeByValue(Distance d) {
        d.feet = 10;
        d.inches = 5;
    }

    // Pass by reference
    void changeByReference(Distance &d) {
        d.feet = 20;
        d.inches = 8;
    }
};

int main() {
    Distance d1;

    cout << "Enter the distance:" << endl;
    d1.inputDistance();

    cout << "\nOriginal distance: ";
    d1.displayDistance();

    // Pass by value
    d1.changeByValue(d1);

    cout << "After pass by value: ";
    d1.displayDistance();

    // Pass by reference
    d1.changeByReference(d1);

    cout << "After pass by reference: ";
    d1.displayDistance();

    return 0;
}