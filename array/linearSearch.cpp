#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {20, 66, 43, 31, 90};

    int keyToFind = 91;
    int length = sizeof(arr) / sizeof(arr[0]);

    int i;
    for (i = 0; i < length; i++)
    {
        if (arr[i] == keyToFind)
        {
            cout << "The searched index is " << i;
            return i;
        }
    }
    cout << -1;
}