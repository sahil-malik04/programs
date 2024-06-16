#include <iostream>
using namespace std;

int main()
{
    int arr[3][4] = {
        {2, 4, 6, 8},
        {10, 12, 14, 16},
        {18, 20, 22, 24}};

    cout << arr[1][2]; // expected as 14

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}