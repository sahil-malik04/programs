#include <iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
}

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};

    bool result = isSorted(arr, 5);

    if (result)
    {
        cout << "Given array is sorted";
    }
    else
    {
        cout << "Given array is unsorted";
    }
}