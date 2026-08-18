#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    // Constructor
    Student() {
        name = "Kismat";
        age = 20;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;   // Constructor is automatically called

    s1.display();


}