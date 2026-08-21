#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Function to input distance
    void input()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    // Overload > operator
    bool operator>(Distance d)
    {
        // Convert both distances into total inches
        int total1 = feet * 12 +  inches;
        int total2 = feet * 12 + inches;

        return total1 > total2;
    }

    // Function to display distance
    void display()
    {
        cout << feet << " feet " << inches << " inches";
    }
};

int main()
{
    Distance d1, d2;

    cout << "Enter first distance:\n";
    d1.input();

    cout << "\nEnter second distance:\n";
    d2.input();

    cout << "\nFirst Distance: ";
    d1.display();

    cout << "\nSecond Distance: ";
    d2.display();

    if (d1 > d2)
        cout << "\n\nFirst distance is greater.";
    else
        cout << "\n\nSecond distance is greater or equal.";

    return 0;
}