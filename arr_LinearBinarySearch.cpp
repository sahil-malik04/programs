#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {97, 25, 65, 40, 35, 91, 50, 78};
    int arr1[8] = {7, 15, 28, 39, 43, 49, 54, 60};

    // linear search
    int arrLength = sizeof(arr) / sizeof(arr[0]);
    int key = 35;

    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == key)
        {
            cout << key;
        }
    }

    // binary search
    int arr1Length = sizeof(arr1) / sizeof(arr1[0]);
    int l, h, mid;
    l = 0;
    h = arr1Length - 1;
    int key = 62;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr1[mid])
        {
            cout << "Found at index->" << " " << mid;
            break;
        }
        else if (key < arr1[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout<<"No index found!";
}