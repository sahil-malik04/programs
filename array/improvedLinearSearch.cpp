#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int arr[5] = {20, 22, 45, 88, 91};
    int length = sizeof(arr) / sizeof(arr[0]);
    int keyToFind = 45;

    // // transposition
    // for (int i = 0; i < length; i++)
    // {
    //     if (arr[i] == keyToFind)
    //     {
    //         swap(&arr[i], &arr[i - 1]);
    //         cout << i << endl;
    //     }
    // }

    // move to head
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == keyToFind)
        {
            swap(&arr[i], &arr[0]);
            cout << i << endl;
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << "Array:-";
        cout << arr[i] << endl;
    }
}