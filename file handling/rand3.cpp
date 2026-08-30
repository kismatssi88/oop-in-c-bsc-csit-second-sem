#include <iostream>
#include <fstream>
using namespace std;
 
class Student {
public:
    int roll;
    char name[30];
    float marks;
    bool isDeleted = false;      // logical delete flag
 
    void input() {
        cout << "Roll: "; cin >> roll;
        cout << "Name: "; cin >> name;
        cout << "Marks: "; cin >> marks;
        isDeleted = false;
    }
    void display() {
        cout << roll << "\t" << name << "\t" << marks
             << (isDeleted ? "\t[DELETED]" : "") << endl;
    }
};
 
int main() {
    Student s;
    int n, choice;
 
    fstream file("stud.dat", ios::out | ios::binary);
    cout << "How many students? "; cin >> n;
    for (int i = 0; i < n; i++) { s.input(); file.write(reinterpret_cast<char*>(&s), sizeof(Student)); }
    file.close();
 
    do {
        cout << "\n1. Update marks  2. Delete record  3. Display all  4. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            int recNo; float newMarks;
            cout << "Record number: "; cin >> recNo;
            cout << "New marks: "; cin >> newMarks;
            file.open("stud.dat", ios::in | ios::out | ios::binary);
            file.seekg(recNo * sizeof(Student), ios::beg);
            file.read(reinterpret_cast<char*>(&s), sizeof(Student));
            s.marks = newMarks;
            file.seekp(recNo * sizeof(Student), ios::beg);
            file.write(reinterpret_cast<char*>(&s), sizeof(Student));
            file.close();
            cout << "Marks updated.\n";
        } else if (choice == 2) {
            int recNo;
            cout << "Record number to delete: "; cin >> recNo;
            file.open("stud.dat", ios::in | ios::out | ios::binary);
            file.seekg(recNo * sizeof(Student), ios::beg);
            file.read(reinterpret_cast<char*>(&s), sizeof(Student));
            s.isDeleted = true;                       // logical delete
            file.seekp(recNo * sizeof(Student), ios::beg);
            file.write(reinterpret_cast<char*>(&s), sizeof(Student));
            file.close();
            cout << "Record marked as deleted.\n";
        } else if (choice == 3) {
            file.open("stud.dat", ios::in | ios::binary);
            file.seekg(0, ios::beg);
            cout << "\nRoll\tName\tMarks\n";
            while (file.read(reinterpret_cast<char*>(&s), sizeof(Student)))
                if (!s.isDeleted) s.display();          // skip deleted ones
            file.close();
        }
    } while (choice != 4);
    return 0;
}
