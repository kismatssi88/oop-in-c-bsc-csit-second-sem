#include <iostream>
using namespace std;

// Class
class Student
{
public:
    string name;
    int age;
    int roll;

    // Member function
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "Roll : " << roll << endl;
    }
};

int main()
{
    // Object 1
    Student s1;

    s1.name = "Kushal";
    s1.age = 20;
    s1.roll = 101;

    cout << "Student Details:" << endl;
    s1.display();

    return 0;
}