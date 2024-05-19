#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7, 14, 28, 35};

    int key = 10;
    int length = 4;
    int i = length - 1;

    while (arr[i] > key)
    {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = key;
    length++;

    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}