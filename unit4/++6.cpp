#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c ) {
        count = c;
    }

    // Pre-increment: ++obj
    Counter operator++() {
        ++count;
        return count;
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c(10);

    cout << "Before ++c: ";
    c.display();

    ++c;

    cout << "After ++c: ";
    c.display();

    return 0;
}