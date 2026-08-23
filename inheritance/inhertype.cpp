#include <iostream>
using namespace std;

class Employee
{
protected:
    float salary;

public:
    string empName;

    void setEmployee(string n, float s)
    {
        empName = n;
        salary = s;
    }

    void showEmployee()
    {
        cout << empName << " earns " << salary << endl;
    }
};

// 1) PUBLIC inheritance
// empName stays public
// salary stays protected
class ManagerPublic : public Employee
{
public:
    void test()
    {
        cout << "Public inheritance -> empName: "
             << empName << endl;
    }
};

// 2) PROTECTED inheritance
// empName becomes protected
// setEmployee() and showEmployee() also become protected
class ManagerProtected : protected Employee
{
public:
    void test()
    {
        // Can access protected inherited members
        setEmployee("Ram", 60000);
        showEmployee();

        cout << "Protected inheritance -> empName: "
             << empName << endl;
    }
};

// 3) PRIVATE inheritance
// empName becomes private
// setEmployee() and showEmployee() also become private
class ManagerPrivate : private Employee
{
public:
    void test()
    {
        // Can access private inherited members inside derived class
        setEmployee("Gita", 70000);
        showEmployee();

        cout << "Private inheritance -> empName: "
             << empName << endl;
    }
};

int main()
{
    // -------- PUBLIC INHERITANCE --------
    ManagerPublic m1;

    m1.setEmployee("Sita", 50000);
    m1.showEmployee();
    m1.test();

    // empName is still PUBLIC
    cout << "Outside class: " << m1.empName << endl;


    // -------- PROTECTED INHERITANCE --------
    ManagerProtected m2;

    // Cannot call these from main()
    // because they became protected:
    // m2.setEmployee("Ram", 60000);   // ERROR
    // m2.showEmployee();              // ERROR

    m2.test();


    // -------- PRIVATE INHERITANCE --------
    ManagerPrivate m3;

    // Cannot call these from main()
    // because they became private:
    // m3.setEmployee("Gita", 70000);  // ERROR
    // m3.showEmployee();              // ERROR

    m3.test();

    return 0;
}