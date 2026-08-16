// 4. Defining Member Functions Inside and Outside the Class
// Write a C++ program to create a class Book with the following:
//  Data members: title, author, and price.
//  Define a function inputData() inside the class to accept book details.
//  Define a function displayData() outside the class to display book details.
// Demonstrate the use of both styles of member function definitions.


#include<iostream>
using namespace std;

class Book {
    private:
        string title;
        string author;
        float price;
    
    public:
        //input
        void inputData() {
            cout << "Enter the book title: ";
            cin >> title;
            cout << "Enter the book author: ";
            cin >> author;
            cout << "Enter the book price: ";
            cin >> price;
        }

        // function declared inside the class
        void displayData();
};

// function defined outside the class
void Book::displayData() {
    cout << "Book details....\n";
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Price: " << price;
}

int main() {
    Book b;
    b.inputData();
    b.displayData();
}

