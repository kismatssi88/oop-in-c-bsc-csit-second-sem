#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int *ptr = arr;

    cout << "Enter 5 elements: ";

    // Input using pointer arithmetic
    for (int i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }

    cout << "Array elements are: ";

    // Display using pointer arithmetic
    for (int i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}