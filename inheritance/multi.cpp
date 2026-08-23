#include <iostream>
using namespace std;
 
class Person {
protected:
    string name;
    int age;
public:
    void setPerson(string n, int a) { name = n; age = a; }
    void showPerson() { cout << "Name: " << name << ", Age: " << age << endl; }
};
 
class Employee : public Person {
protected:
    float salary;
public:
    void setEmployee(float s) { salary = s; }
    void showEmployee() { cout << "Salary: " << salary << endl; }
};
 
class Manager : public Employee {
private:
    int teamSize;
public:
    void setManager(int t) { teamSize = t; }
    void showManager() {
        showPerson();      // from grandparent Person
        showEmployee();    // from parent Employee
        cout << "Team Size: " << teamSize << endl;
    }
};
 
int main() {
    Manager m;
    m.setPerson("Kessi", 29);      // inherited from Person (2 levels up)
    m.setEmployee(85000);          // inherited from Employee (1 level up)
    m.setManager(6);               // Manager's own
    m.showManager();
    return 0;
}
