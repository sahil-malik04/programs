#include <iostream>
using namespace std;

int main()
{
    int arr[7] = {10, 15, 20, 8};

    // int index = 4;
    // int value = 18;

    // arr[index] = value;

    int length = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i < length; i++)
    // {
    //     cout << arr[i]<<endl;
    // }

    int index = 1;
    int value = 18;
    int size = 4;

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    length++;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " "; // expected output after shifting
    }
}