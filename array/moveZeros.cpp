#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void moveZeros(int arr[], int length)
{
    int j = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] != 0)
        {
            swap(&arr[i], &arr[j]);
            j++;
        }
    }
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
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int length = sizeof(arr) / sizeof(arr[0]);

    moveZeros(arr, length);
    display(arr, length);
}