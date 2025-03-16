#include <iostream>
using namespace std;

void checkOccurance(int arr[], int length, int number)
{
    int first = -1, last = -1;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == number)
        {
            if (first == -1)
            {
                first = i;
            }
            last = i;
        }
    }
    cout << "The first occurance at index: " << first << " " << "The last occurance at index: " << last;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 8, 8, 11, 13};
    int length = sizeof(arr) / sizeof(arr[0]);
    int number = 8;
    checkOccurance(arr, length, number);
}