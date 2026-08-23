#include <iostream>
using namespace std;
 
class Vehicle {
private:
    string engineNumber;      // hidden even from Car
protected:
    int topSpeed;              // visible to Car
public:
    string brand;               // visible everywhere
    void setEngineNumber(string e) { engineNumber = e; }
    void showEngineNumber() { cout << "Engine No: " << engineNumber << endl; }
};
 
class Car : public Vehicle {
public:
    void setCarDetails(string b, int speed) {
        brand = b;              // OK - public
        topSpeed = speed;       // OK - protected, accessible in derived class
        // engineNumber = "X123"; // ERROR if uncommented - private in Vehicle
    }
    void showCarDetails() {
        cout << "Brand: " << brand << ", Top Speed: " << topSpeed << " km/h" << endl;
    }
};
 
int main() {
    Car c;
    c.setEngineNumber("ENG-2026-001");   // public function, allowed
    c.setCarDetails("Toyota", 180);
    c.brand = "Toyota-Corolla";           // OK - brand is public
    c.showCarDetails();
    c.showEngineNumber();
    return 0;
}
