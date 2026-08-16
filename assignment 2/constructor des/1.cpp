// 1. Constructor and Destructor (Basic Implementation)
// Write a C++ program to create a class Person with:
//  Data members: name and age.
//  A constructor to initialize these values.
//  A destructor to display a message when an object is destroyed.
// Demonstrate object creation and automatic destructor call at the end of the program.

#include<iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;
    
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }

        void display() {
            cout <<"Name: "<< name <<" "<< "Age: "<< age<< endl;
        }

        ~Person() {
            cout << "Destructor called";
        }
};

int main() {
    Person p("kessi", 19);
    p.display();
    return 0;
}