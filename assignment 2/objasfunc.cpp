#include <iostream>
using namespace std;

class Student {
public:
    int marks;

    void display(Student s) {
        cout << "Marks: " << s.marks;
    }
};

int main() {
    Student s1;
    s1.marks = 85;

    s1.display(s1);

    return 0;
}