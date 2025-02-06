#include <iostream>
using namespace std;

int secondLargest(int arr[], int length)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    int arr[6] = {10, 95, 6, 2, 55, 88};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sLargest = secondLargest(arr, length);
    cout << sLargest;
}