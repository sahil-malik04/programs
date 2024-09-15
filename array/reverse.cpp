#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 5, 15, 90, 55};
    int aux[5];
    int length = sizeof(arr) / sizeof(arr[0]);

    // // using auxiliary
    // for (int i = length - 1, j = 0; i >= 0; i--, j++)
    // {
    //     aux[j] = arr[i];
    // }
    // for (int i = 0; i < length; i++)
    // {
    //     arr[i] = aux[i];
    // }
    // for (int i = 0; i < length; i++)
    // {
    //     cout << aux[i] << endl;
    // }

    // without auxiliary
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {

        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << endl;
    }
}