#include <iostream>
using namespace std;
 
// ---- 1) Function overloading: display() for int and for string ----
void display(int i) {
    cout << "Integer display: " << i << endl;
}
void display(string s) {
    cout << "String display: " << s << endl;
}
 
// ---- 2) Operator overloading: + for Complex numbers ----
class Complex {
private:
    float real, imag;
public:
    void setComplex(float r, float i) { real = r; imag = i; }
 
    Complex operator+(Complex c2) {          // overloading the + operator
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    void showComplex() {
        cout << real << " + " << imag << "i" << endl;
    }
};
 
int main() {
    cout << "-- Function overloading --" << endl;
    display(100);          // compiler picks display(int)
    display("Hello OOP");  // compiler picks display(string)
 
    cout << "\n-- Operator overloading --" << endl;
    Complex c1, c2, c3;
    c1.setComplex(2.5, 3.0);
    c2.setComplex(1.5, 4.0);
    c3 = c1 + c2;           // calls c1.operator+(c2) automatically
    cout << "c1 = "; c1.showComplex();
    cout << "c2 = "; c2.showComplex();
    cout << "c1 + c2 = "; c3.showComplex();
    return 0;
}
 