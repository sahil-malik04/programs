#include <iostream>
using namespace std;

int findMaxProfilt(int arr[], int length)
{

    int buyPrice = arr[0];
    int sellPrice = 0;

    for (int i = 1; i < length; i++)
    {
        if (arr[i] < buyPrice)
        {
            buyPrice = arr[i];
        }
        int profit = arr[i] - buyPrice;

        if (profit > sellPrice)
        {
            sellPrice = profit;
        }
    }
    return sellPrice;
}

int main()
{
    int arr[6] = {7, 1, 5, 3, 6, 4};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << findMaxProfilt(arr, length);
}