#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < 5 && j < 5)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < 5)
    {
        arr3[k++] = arr1[i++];
    }
    while (j < 5)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{

    int arr1[5] = {10, 15, 26, 75, 80};
    int arr2[5] = {12, 18, 30, 78};
    int arr3[10];

    merge(arr1, arr2, arr3);

    for (int i = 0; i < 10; i++)
    {
        cout << arr3[i] << " ";
    }
}