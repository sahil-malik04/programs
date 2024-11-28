#include <iostream>
using namespace std;

void twoSum(int arr[], int target, int size)
{
    int left = 0;
    int right = size - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "Numbers are- " << arr[left] << " " << arr[right];
            return;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {

            right--;
        }
    }
    cout << "No match found!";
}

int main()
{
    int arr[5] = {14, 40, 44, 50, 62};
    int target = 90;
    int size = 5;
    twoSum(arr, target, size);
}