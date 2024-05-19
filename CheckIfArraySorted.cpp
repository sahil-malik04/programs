#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 12, 18, 25, 32};
    // int arr[5] = {10, 12, 25, 18, 32};

    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << "Given Array is unsorted";
            return 1;
        }
    }
    cout << "Given Array is sorted";
}
