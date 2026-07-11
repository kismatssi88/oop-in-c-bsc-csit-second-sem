#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 5.5;

    // Implicit typecasting
    double result1 = a + b; // 'a' is implicitly converted to double
    cout << "Result of implicit typecasting: " << result1 << endl;

    // Explicit typecasting
    int result2 = (int)b; // 'b' is explicitly converted to int
    cout << "Result of explicit typecasting: " << result2 << endl;

    return 0;
}