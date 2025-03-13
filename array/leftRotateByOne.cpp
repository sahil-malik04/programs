#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int length)
{
    int element = arr[0];
    int i;
    for (i = 0; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[i] = element;
}

void display(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {5, 10, 15, 25, 20};
    int length = sizeof(arr) / sizeof(arr[0]);
    leftRotateByOne(arr, length);
    display(arr, length);
}