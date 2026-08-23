#include <iostream>
using namespace std;
 
class Person {
private:
    string name;
    int age;
public:
    void inputPerson() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter age: "; cin >> age;
    }
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
 
class Student : public Person {
private:
    int studentID;
    float marks;
public:
    void inputStudent() {
        inputPerson();                 // reused from base class
        cout << "Enter student ID: "; cin >> studentID;
        cout << "Enter marks: "; cin >> marks;
    }
    void displayStudent() {
        displayPerson();                // reused from base class
        cout << "Student ID: " << studentID << ", Marks: " << marks << endl;
    }
};
 
int main() {
    Student s;
    s.inputStudent();
    cout << "\n--- Student Record ---\n";
    s.displayStudent();
    return 0;
}
