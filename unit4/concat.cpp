#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char str[100];

public:
    // Constructor
    MyString(const char s[] = "") {
        strcpy(str, s);
    }

    // Overload + operator
    MyString operator+(MyString s) {
        MyString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    // Display function
    void display() {
        cout << str << endl;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World");

    MyString s3 = s1 + s2;

    cout << "First string: ";
    s1.display();

    cout << "Second string: ";
    s2.display();

    cout << "Concatenated string: ";
    s3.display();

    return 0;
}