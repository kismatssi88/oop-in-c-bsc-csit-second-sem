// Write a C++ program to design a structure named Student with data members: student ID, name, and
// marks. Then design a class named Result that:
//  Accepts student data.
//  Calculates the average marks.
//  Displays the result of the student.
// Use both structure and class in a single program.

#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    float marks[5];
};

class Result
{
private:
    Student s;
    float avg;

public:
    void inputData()
    {

        cout << "Enter student id: ";
        cin >> s.id;
        cout << "Enter student name: ";
        cin >> s.name;

        cout << "Enter marks for five subject: " << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks of subject " << (i + 1) << endl;
            cin >> s.marks[i];
        }
    }

    void calculateAvg()
    {
        float total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += s.marks[i];
        }
        avg = total / 5;
    }

    void display()
    {
        cout << "Id: " << s.id << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cout << s.marks[i] << " ";
        }
        cout << endl;
        cout << "Average marks: " << avg;
    }
};

int main() {
    Result res;
    res.inputData();
    res.calculateAvg();
    res.display();

    return 0;
}