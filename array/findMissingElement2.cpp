#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {6, 7, 8, 9, 11, 12, 15, 16, 17};
    int diff = arr[0];

    for (int i = 0; i < 9; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << "Missing element- " << i + diff<<endl;
                diff++;
            }
        }
    }
}