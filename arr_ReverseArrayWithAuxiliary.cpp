#include <iostream>
using namespace std;

int main()
{
    // Reverse with the help of auxiliary
    int arr[5] = {99, 34, 15, 57, 62};

    int arr1[5];
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = length - 1, j = 0; i >= 0; i--, j++)
    {
        arr1[j] = arr[i];
    }

    for (int i = 0; i < length; i++)
    {
        arr[i] = arr1[i];
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}