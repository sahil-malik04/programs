#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 95, 6, 2, 55, 88};
    int max = arr[0], min = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "max is " << max << endl;
    cout << "min is " << min;
}