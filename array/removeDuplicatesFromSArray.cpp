#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int length)
{

    int i = 0;

    for (int j = 1; j < length; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    return i + 1;
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
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int length = sizeof(arr) / sizeof(arr[0]);
    int newLength = removeDuplicates(arr, length);
    display(arr, newLength);
}