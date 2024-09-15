#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {10, 5, 2, 7};

    int indexToDelete = 1;
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = indexToDelete; i < length - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    length--;

    for (int i = 0; i < length; i++)
    {
        cout << "Elements are:" << " " << arr[i] << endl;
    }
}