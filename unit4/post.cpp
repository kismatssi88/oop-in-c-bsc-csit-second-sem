#include <iostream>
using namespace std;

class Counter {
    int count;

public:
    Counter(int c = 0) {
        count = c;
    }

    // Pre-increment: ++obj
    Counter operator++() {
        ++count;
        return count;
    }

    // Post-increment: obj++
    Counter operator++(int) {
        Counter temp = count;  // Store old value
        count++;               // Increase count
        return temp;           // Return old value
    }

    void display() {
        cout << "Count = " << count << endl;
    }
};

int main() {
    Counter c(10);

    cout << "Initial value: ";
    c.display();

    // Pre-increment
    ++c;
    cout << "After pre-increment (++c): ";
    c.display();

    // Post-increment
    c++;
    cout << "After post-increment (c++): ";
    c.display();

    return 0;
}