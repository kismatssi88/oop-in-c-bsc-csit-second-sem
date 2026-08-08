#include <iostream>
#include <string>
using namespace std;

// Displaying integer
int display(int num)
{
    return num;
}

// Displaying float
double display(double num)
{
    return num;
}

// Displaying text
string display(string text)
{
    return text;
}

int main()
{  
    cout << "Integer: " << display(10) << endl;
    cout << "Float: " << display(10.5) << endl;
    cout << "Text: " << display("world") << endl;

    return 0;
}