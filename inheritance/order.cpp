#include <iostream>
using namespace std;
 
class Person {
public:
    Person()  { cout << "1. Person constructor called" << endl; }
    ~Person() { cout << "4. Person destructor called" << endl; }
};
 
class Employee : public Person {
public:
    Employee()  { cout << "2. Employee constructor called" << endl; }
    ~Employee() { cout << "3. Employee destructor called" << endl; }
};
 
int main() {
    cout << "--- Creating Employee object ---" << endl;
    Employee e;
    cout << "--- Object in use ---" << endl;
    cout << "--- Leaving main, object will be destroyed ---" << endl;
    return 0;
}
