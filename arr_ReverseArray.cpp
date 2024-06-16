#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {99, 34, 15, 57, 62};

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}