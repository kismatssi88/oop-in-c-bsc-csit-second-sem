// 5. The Default Copy Constructor
// Write a C++ program to create a class Car with:
//  Data members: company and price.
//  Use the compiler-provided default copy constructor to copy object data.
//  Display the copied object details.
// Explain how the default copy constructor works automatically in this scenario.

#include<iostream>
using namespace std;

class Car {
    private:
        string company;
        float price;
    
    public:
        Car(string c, float p) {
            company = c;
            price = p;
        }

        void display() {
            cout << "Compnay: "<< company<< " " << "Price: "<< price;
        }
    
};

int main() {
    Car c1("Mercedes", 100000);
    
    // default copy consturctor
    Car c2 = c1;
    c2.display();
    return 0;
}

// how it works

// even when parameterized constructor is not created , Car c2= c1 works correctly. This is because when there is no user defined copy consturctor 
// compiler generated the similar to user defined copy consturctor( Car(const car& other) ) behind the scence and make it works without any error 