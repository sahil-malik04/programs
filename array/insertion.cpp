#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {21, 25, 34};

    int x = 90;
    int index = 1;
    int size = 3;
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = x;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i]<<endl;
    }
}