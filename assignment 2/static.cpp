#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    static int count;   // Static data member

   Student(string n) {
        name=n;
        count++;
    }

    void display() {
        cout << "Student: " << name << endl;
    }
};

// Definition of static data member
int Student::count;

int main() {
  

    Student s1("Ram");
    Student s2("Sita");
    Student s3("Hari");

    s1.display();
    s2.display();
    s3.display();

    cout << "Total students: " << Student::count << endl;

    return 0;
}