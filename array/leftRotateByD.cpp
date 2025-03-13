#include <iostream>
#include <algorithm>
using namespace std;

void leftRotateByD(int arr[], int length, int d)
{
    d = d % length;
    reverse(arr, arr + d);
    reverse(arr + d, arr + length);
    reverse(arr, arr + length);
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
    int arr[6] = {5, 10, 15, 25, 20, 12};
    int length = sizeof(arr) / sizeof(arr[0]);
    int placesToRotate = 12;
    leftRotateByD(arr, length, placesToRotate);
    display(arr, length);
}