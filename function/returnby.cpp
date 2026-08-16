#include <iostream>
using namespace std;

// Function returns a reference to the larger number
int& larger(int&  a, int& b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function returns a reference to the larger number
    int&
   result = larger(num1, num2);

    cout << "The larger number is: " << result << endl;

    return 0;
}