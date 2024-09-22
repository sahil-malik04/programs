#include <iostream>
using namespace std;

int main()
{
    char upperArr[] = "ALGORITHM";
    char lowerArr[] = "algorithm";

    int i;
    for (i = 0; upperArr[i] != '\0'; i++)
    {
        upperArr[i] = upperArr[i] + 32;
    }
    cout << upperArr;
}