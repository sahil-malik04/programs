#include <iostream>
using namespace std;

void sortArr(int arr[], int length)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }

    int idx = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[idx++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[idx++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[idx++] = 2;
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
    int arr[] = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    int length = sizeof(arr) / sizeof(arr[0]);
    sortArr(arr, length);
    display(arr, length);
}