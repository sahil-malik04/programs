#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char strArr[] = "github";
    int len = strlen(strArr);
    char revArr[len + 1];

    for (int i = len - 1, j = 0; i >= 0; i--, j++)
    {
        revArr[j] = strArr[i];
    }

    revArr[len] = '\0';

    cout << revArr;
}