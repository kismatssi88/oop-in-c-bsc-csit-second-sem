//function overloading
#include <iostream>
using namespace std;
int display(int a)
{
    cout << "Integer: " << a << endl;
    return a;
}
double display(double a)
{
    cout << "Double: " << a << endl;
    return a;
}   
string display(string a)
{
    cout << "String: " << a << endl;
    return a;
}
int main()
{
    display(10);
    display(10.5);
    display("Hello, World!");
    return 0;
}