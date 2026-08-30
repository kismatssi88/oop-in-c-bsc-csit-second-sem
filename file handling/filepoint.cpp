#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    fstream file;
    file.open("pointer.txt", ios::out);
    file << "ABCDEFGHIJ";              // 10 characters, positions 0-9
    cout << "Position of put pointer after writing: " << file.tellp() << endl;
    file.close();
 
    // ----- Overwrite part of the file using seekp() -----
    file.open("pointer.txt", ios::in | ios::out);
    file.seekp(3, ios::beg);           // move put pointer to index 3
    file << "XYZ";                     // overwrites D,E,F with X,Y,Z
    file.close();
 
    // ----- Read using tellg() and seekg() -----
    file.open("pointer.txt", ios::in);
    cout << "Get pointer at start: " << file.tellg() << endl;
 
    char ch;
    file.seekg(0, ios::end);           // move to the end
    cout << "File length (tellg at end): " << file.tellg() << endl;
 
    file.seekg(0, ios::beg);           // move back to beginning
    cout << "Full content after overwrite: ";
    while (file.get(ch))
        cout << ch;
    cout << endl;
 
    file.close();
    return 0;
}
