#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 15, 20, 8};
    int index = 2;

    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = index; i < length; i++)
    {
        arr[i] = arr[i + 1];
    }
    length--;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}