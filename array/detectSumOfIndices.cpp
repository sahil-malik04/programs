#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {2, 7, 11, 15};
    int target = 26;
    int arr2[2];

    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                arr2[0] = i;
                arr2[1] = j;
                break;
            }
        }
    }

    for (int i = 0; i < 2; i++)
    {
        cout << arr2[i] << " ";
    }
}