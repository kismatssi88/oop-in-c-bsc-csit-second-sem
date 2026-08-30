// Q1 : Demonstrates ofstream (write) and ifstream (read)
// Stream Hierarchy : ios -> istream -> ifstream
//                     ios -> ostream -> ofstream
#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    // ---------- WRITING using ofstream ----------
    ofstream fout;                     // ofstream : derived from ostream
    fout.open("demo.txt");
    if (!fout) {
        cout << "File could not be created!" << endl;
        return 1;
    }
    fout << "Hello, this is my first file handling program." << endl;
    fout << "C++ file streams make data permanent." << endl;
    fout.close();                      // always close after writing
    cout << "Data written successfully to demo.txt" << endl;
 
    // ---------- READING using ifstream ----------
    ifstream fin;                      // ifstream : derived from istream
    fin.open("demo.txt");
    if (!fin) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    string line;
    cout << "\n----- Contents of demo.txt -----" << endl;
    while (getline(fin, line)) {       // getline() from istream
        cout << line << endl;
    }
    fin.close();
    return 0;
}
