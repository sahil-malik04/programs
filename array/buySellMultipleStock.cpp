#include <iostream>
using namespace std;

int findMaxProfilt(int arr[], int length)
{

    int profilt = 0;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profilt += arr[i] - arr[i - 1];
        }
    }
    return profilt;
}

int main()
{
    int arr[8] = {5, 2, 6, 1, 4, 7, 3, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << findMaxProfilt(arr, length);
}