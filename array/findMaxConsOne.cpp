#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int length)
{
    int maxCount = 0, count = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }

    return maxCount;
}

int main()
{
    int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Max-- " << findMaxConsecutiveOnes(arr, length);
}