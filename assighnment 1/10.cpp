#include <iostream>
using namespace std;

int calculateSum(int *arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}

int main()
{
    int arr[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int sum = calculateSum(arr, 5);

    cout << "Sum of elements = " << sum << endl;

    return 0;
}