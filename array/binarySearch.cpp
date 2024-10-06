#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {7, 15, 28, 39, 43, 49, 54, 60};
    int keyToFind = 15;
    int length = sizeof(arr) / sizeof(arr[0]);

    int l, h, mid;
    l = 0;
    h = length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;

        if (keyToFind == arr[mid])
        {
            cout << "Found at index->" << " " << mid;
            break;
        }
        else if (keyToFind < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << "No index found!";
}