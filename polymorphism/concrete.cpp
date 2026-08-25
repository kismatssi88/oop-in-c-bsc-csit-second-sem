#include <iostream>
using namespace std;
 
// ---- Concrete class: fully implemented, can be instantiated directly ----
class Employee {
private:
    string name;
    float salary;
public:
    void setEmployee(string n, float s) { name = n; salary = s; }   // full body
    void showEmployee() { cout << name << " earns " << salary << endl; } // full body
};
 
// ---- Abstract class for comparison: contains a pure virtual function ----
class Shape {
public:
    virtual float area() = 0;    // NOT implemented here -- makes Shape abstract
};
 
int main() {
    Employee e;                  // OK -- Employee is concrete, every function has a body
    e.setEmployee("Reeta", 45000);
    e.showEmployee();
 
    // Shape s;                  // ERROR if uncommented -- Shape is abstract, cannot instantiate
 
    cout << "Employee is a CONCRETE class -> object created successfully." << endl;
    cout << "Shape is an ABSTRACT class -> direct object creation is illegal." << endl;
    return 0;
}
