#include <iostream>
#include <fstream>
using namespace std;
 
class Product {
public:
    int id;
    char name[30];
    float price;
    void input() {
        cout << "ID: "; cin >> id;
        cout << "Name: "; cin >> name;
        cout << "Price: "; cin >> price;
    }
    void display() {
        cout << id << "\t" << name << "\t" << price << endl;
    }
};
 
int main() {
    Product p;
    int n, choice;
 
    fstream file("product.dat", ios::out | ios::binary);
    cout << "How many products? "; cin >> n;
    for (int i = 0; i < n; i++) { p.input(); file.write(reinterpret_cast<char*>(&p), sizeof(Product)); }
    file.close();
 
    do {
        cout << "\n1. View record  2. Update price  3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            int recNo;
            cout << "Enter record number (0-indexed): "; cin >> recNo;
            file.open("product.dat", ios::in | ios::binary);
            file.seekg(recNo * sizeof(Product), ios::beg);   // random access (read)
            file.read(reinterpret_cast<char*>(&p), sizeof(Product));
            cout << "Record: "; p.display();
            file.close();
        } else if (choice == 2) {
            int recNo; float newPrice;
            cout << "Record number to update: "; cin >> recNo;
            cout << "New price: "; cin >> newPrice;
            file.open("product.dat", ios::in | ios::out | ios::binary);
            file.seekg(recNo * sizeof(Product), ios::beg);
            file.read(reinterpret_cast<char*>(&p), sizeof(Product));
            p.price = newPrice;
            file.seekp(recNo * sizeof(Product), ios::beg);   // random access (write)
            file.write(reinterpret_cast<char*>(&p), sizeof(Product));
            cout << "Price updated successfully!\n";
            file.close();
        }
    } while (choice != 3);
    return 0;
}
