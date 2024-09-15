#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 25, 55, 5, 33, 7};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < length; i++)
    {
        if (i != length - 1)
        {
            int sum = arr[i] + arr[i + 1];
            cout << sum << endl;
        }
    }
}