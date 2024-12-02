#include <iostream>
using namespace std;

// moore's voting algo
int findMajorityEle(int arr[], int length)
{
    int count = 0;
    int element = 0;

    for (int i = 0; i < length; i++)
    {
        if (count == 0)
        {
            element = arr[i];
        }
        count += (arr[i] == element) ? 1 : -1;
    }
    return element;
}

int main()
{
    int arr[] = {2, 2, 1, 1, 1, 2, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << findMajorityEle(arr, length);
}