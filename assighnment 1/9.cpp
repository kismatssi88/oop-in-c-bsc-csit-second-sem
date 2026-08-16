#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    // Dynamically allocate memory
    int *arr = new int[n];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}