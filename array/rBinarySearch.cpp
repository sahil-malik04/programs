#include <iostream>
using namespace std;

void rBinarySearch(int arr[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (arr[mid] == key)
        {
            cout << "Found at index->" << " " << mid;
        }
        else if (key < arr[mid])
        {
            return rBinarySearch(arr, l, mid - 1, key);
        }
        else
        {
            return rBinarySearch(arr, mid + 1, h, key);
        }
    }
}

int main()
{
    int arr[8] = {7, 15, 28, 39, 43, 49, 54, 60};
    int keyToFind = 49;
    int length = sizeof(arr) / sizeof(arr[0]);

    int l, h;
    l = 0;
    h = length - 1;

    rBinarySearch(arr, l, h, keyToFind);
}
