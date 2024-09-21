#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int arr[7] = {10, 4, -2, 7, -8, 14, -18};
    int length = sizeof(arr) / sizeof(arr[0]);

    int j = length - 1;

    for (int i = 0; i < j; i++)
    {

        while (i < j && arr[j] > 0)
        {
            j--;
        }

        if (arr[i] > 0)
        {
            swap(&arr[i], &arr[j]);
        }
    }

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}