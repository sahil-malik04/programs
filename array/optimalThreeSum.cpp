#include <iostream>
#include <algorithm>
using namespace std;

void findTriplets(int arr[], int length)
{
    sort(arr, arr + length);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = length - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                cout << "Triples are " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                j++;
                k--;
                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }
}

int main()
{
    int arr[] = {-1, 0, 1, 2, -1, -4};
    int length = sizeof(arr) / sizeof(arr[0]);
    findTriplets(arr, length);
}