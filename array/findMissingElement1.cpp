#include <iostream>
using namespace std;

int main()
{
    // // case of natural sorted numbers
    // int arr[10] = {1,
    //                2,
    //                3,
    //                4,
    //                5,
    //                7,
    //                8,
    //                9,
    //                10,
    //                11};
    // int n = 11;
    // int sumOfArray = 0;
    // int sumOfNatural = n * (n + 1) / 2;

    // for (int i = 0; i < 10; i++)
    // {
    //     sumOfArray = sumOfArray + arr[i];
    // }
    // int missingElement = sumOfNatural - sumOfArray;
    // cout << "Missing Element is " << missingElement;

    // case of random sorted numbers
    int arr[10] = {6,
                   7,
                   8,
                   9,
                   11,
                   12,
                   13,
                   14,
                   15,
                   16};

    int diff = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing element is " << i + diff;
            break;
        }
    }
}