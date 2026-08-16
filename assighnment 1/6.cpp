#include <iostream>
using namespace std;

// extern variable
int number = 100;

// Function to demonstrate static
void showStatic()
{
    static int count = 0;
    count++;

    cout << "Static count: " << count << endl;
}

int main()
{
    // auto variable
    auto x = 10;

    cout << "Auto variable: " << x << endl;

    // extern variable
    extern int number;

    cout << "Extern variable: " << number << endl;

    // Calling function multiple times
    cout << "\nStatic variable demonstration:" << endl;

    showStatic();
    showStatic();
    showStatic();

    return 0;
}