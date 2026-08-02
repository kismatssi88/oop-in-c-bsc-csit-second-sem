#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string product1, product2, product3;
    double price1, price2, price3;
    int qty1, qty2, qty3;

    // Input
    cout << "Enter details of Product 1\n";
    cout << "Name:";
    cin >> product1;
    cout << "Price: ";
    cin >> price1;
    cout << "Quantity: ";
    cin >> qty1;

    cout << "\nEnter details of Product 2\n";
    cout << "Name: ";
    cin >> product2;
    cout << "Price: ";
    cin >> price2;
    cout << "Quantity: ";
    cin >> qty2;

    cout << "\nEnter details of Product 3\n";
    cout << "Name: ";
    cin >> product3;
    cout << "Price: ";
    cin >> price3;
    cout << "Quantity: ";
    cin >> qty3;

    // Calculate total price
    double total = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);

    // Display table
    cout << "\n---------------- Product Details ----------------" << endl;
    cout << left << setw(15) << "Product"
         << setw(12) << "Price"
         << setw(10) << "Quantity"
         << setw(12) << "Amount" << endl;

    cout << "-------------------------------------------------" << endl;

    cout << left << setw(15) << product1
         << setw(12) << price1
         << setw(10) << qty1
         << setw(12) << price1 * qty1 << endl;

    cout << left << setw(15) << product2
         << setw(12) << price2
         << setw(10) << qty2
         << setw(12) << price2 * qty2 << endl;

    cout << left << setw(15) << product3
         << setw(12) << price3
         << setw(10) << qty3
         << setw(12) << price3 * qty3 << endl;

    cout << "-------------------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Price = " << total << endl;

    return 0;
}