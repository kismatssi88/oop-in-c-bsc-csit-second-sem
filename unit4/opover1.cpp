#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Function to input complex number
    void input() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Overload + operator
    Complex operator+(Complex c) {
        Complex temp;

        temp.real = c.real + c.real;
        temp.imag = c.imag + c.imag;

        return temp;
    }

    // Function to display complex number
    void display() {
        cout << real << " + " << imag <<"i"<< endl;
    }
};

int main() {
    Complex c1, c2, result;

    cout << "Enter first complex number:\n";
    c1.input();

    cout << "\nEnter second complex number:\n";
    c2.input();

    // Adding two complex numbers
    result = c1 + c2;

    cout << "\nSum = ";
    result.display();

    return 0;
}