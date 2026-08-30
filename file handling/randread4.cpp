#include <iostream>
#include <fstream>
using namespace std;
 
class Book {
public:
    int bookId;
    char title[40];
    float price;
    void input() {
        cout << "Book ID: "; cin >> bookId;
        cout << "Title: "; cin >> title;
        cout << "Price: "; cin >> price;
    }
    void display() {
        cout << bookId << "\t" << title << "\t" << price << endl;
    }
};
 
int main() {
    Book b;
    int n;
    ofstream fout("books.dat", ios::binary);
    cout << "How many books? "; cin >> n;
    for (int i = 0; i < n; i++) { b.input(); fout.write(reinterpret_cast<char*>(&b), sizeof(Book)); }
    fout.close();
 
    int recNo;
    cout << "Enter record number to view directly (0-indexed): "; cin >> recNo;
 
    ifstream fin("books.dat", ios::binary);
    fin.seekg(recNo * sizeof(Book), ios::beg);   // jump straight to the record: NO loop needed
    if (fin.read(reinterpret_cast<char*>(&b), sizeof(Book))) {
        cout << "Book Details: "; b.display();
    } else {
        cout << "Invalid record number!" << endl;
    }
    fin.close();
    return 0;
}
