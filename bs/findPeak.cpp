#include <iostream>
using namespace std;

int findPeak(int arr[], int length)
{
    if (length == 1)
        return 0;
    if (arr[0] > arr[1])
        return 0;
    if (arr[length - 1] > arr[length - 2])
        return length - 1;
    int low = 1, high = length - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid - 1])
        {
            low = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[10] = {1, 10, 13, 7, 6, 5, 4, 2, 1, 0};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Peak found at index: " << findPeak(arr, length);
    return 0;
}