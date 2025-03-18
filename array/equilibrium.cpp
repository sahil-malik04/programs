#include <iostream>
using namespace std;

int checkEquilibrium(int arr[], int length)
{
    if (length == 1)
    {
        return 1;
    }
    int totalSum = 0, leftSum = 0, rightSum = 0;
    for (int i = 0; i < length; i++)
    {
        totalSum += arr[i];
    }
    for (int i = 1; i < length - 1; i++)
    {
        leftSum += arr[i - 1];
        rightSum = totalSum - arr[i] - leftSum;
        if (leftSum == rightSum)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 6, 2, 2};
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = (checkEquilibrium(arr, length));
    if (result != -1)
    {
        cout << "Equilibrium point index is: " << checkEquilibrium(arr, length);
    }
    else
    {
        cout << "No equilibrium point exist!";
    }
    return 0;
}
