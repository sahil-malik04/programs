#include <iostream>
using namespace std;

int main()
{

    int x;
    cout << "Enter the no. of elements";
    cin >> x;

    int arr[x];

    for (int i = 0; i <= x; i++)
    {
        cout << "Enter the " << i << "th" << " element";
        cin >> arr[i];
    }

    cout << "Here is the details:" << endl;
    for (int i = 0; i <= x; i++)
    {
        cout << arr[i] << endl;
    }
}