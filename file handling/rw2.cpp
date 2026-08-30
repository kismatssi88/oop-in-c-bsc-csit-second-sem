#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    int n;
    ofstream fout("persons.txt");     // open directly in constructor
 
    cout << "How many persons? ";
    cin >> n;
    cin.ignore();
 
    for (int i = 0; i < n; i++) {
        string name;
        int age;
        cout << "Enter name and age: ";
        cin >> name >> age;
        fout << name << " " << age << endl;   // write one record per line
    }
    fout.close();
 
    // ----- Read back and display -----
    ifstream fin("persons.txt");
    string name;
    int age;
    cout << "\n----- Records in File -----" << endl;
    cout << "Name\t\tAge" << endl;
    while (fin >> name >> age) {       // >> returns false at EOF
        cout << name << "\t\t" << age << endl;
    }
    fin.close();
    return 0;
}
