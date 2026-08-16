// 4. Copy Constructor
// Write a C++ program to create a class Book with:
//  Data members: title and price.
//  A parameterized constructor to initialize book details.
//  A copy constructor to initialize one object using another.
//  A function to display the book details.

#include<iostream>
using namespace std;

class Book {
    private:
        string title;
        float price;

    public:
        Book(string t, float p) {
            title = t;
            price = p;
        }

        Book(const Book& other) {
            title = other.title;
            price = other.price;
            cout << "Copy constructor called"<<endl;
        }

        void display() {
            cout <<" Title: "<< title << " Price: "<< price<< endl;
        }
};

int main() {
    Book b1("The World", 69.69);
    b1.display();

    Book b2 = b1;
    b2.display();

    return 0;
}