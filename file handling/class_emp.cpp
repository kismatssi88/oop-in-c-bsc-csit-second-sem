#include <iostream>
#include <fstream>
using namespace std;
 
class Employee {
public:
    int empId;
    char name[30];
    float salary;
    void input() {
        cout << "Employee ID: "; cin >> empId;
        cout << "Name: "; cin >> name;
        cout << "Salary: "; cin >> salary;
    }
    void display() {
        cout << empId << "\t" << name << "\t" << salary << endl;
    }
};
 
int main() {
    int n;
    Employee e;
    ofstream fout("emp.dat", ios::binary);
    cout << "How many employees to add? "; cin >> n;
    for (int i = 0; i < n; i++) {
        e.input();
        fout.write(reinterpret_cast<char*>(&e), sizeof(Employee));
    }
    fout.close();
 
    ifstream fin("emp.dat", ios::binary);
    cout << "\n----- All Employees -----" << endl;
    cout << "ID\tName\tSalary" << endl;
    while (fin.read(reinterpret_cast<char*>(&e), sizeof(Employee)))
        e.display();
    fin.close();
    return 0;
}
