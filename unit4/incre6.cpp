#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    // Constructor
    Counter() {
        count = 0;
    }

    // Overload pre-increment ++ operator
    void operator++() {
        ++count;
    }

    // Display count
    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c;

    c.display();

    ++c;   // Calls operator++()
    c.display();

    ++c;
    c.display();

    return 0;
}