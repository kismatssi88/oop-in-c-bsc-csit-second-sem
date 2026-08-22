#include <iostream>
using namespace std;

class Time {
    int hours, minutes;

public:
    Time(int h, int m) {
        hours = h;
        minutes = m;
    }

    // Conversion function: Time object → int
    operator int() {
        return hours * 60 + minutes;
    }
};

int main() {
    Time t(2, 30);

    // Time object is converted into int
    int totalMinutes = t;

    cout << "Total minutes = " << totalMinutes << endl;

    return 0;
}
