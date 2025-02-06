#include <iostream>
using namespace std;

int findNumber(int arr[], int length)
{
    int result = 0;
    for (int i = 0; i < length; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

int main()
{
    int arr[] = {1, 1, 2, 3, 3, 4, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << findNumber(arr, length);
}