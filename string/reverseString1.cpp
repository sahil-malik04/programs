#include <iostream>
#include <cstring>
using namespace std;

void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    char strArr[] = "github";
    int len = strlen(strArr);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        swap(&strArr[i], &strArr[j]);
    }

    cout << strArr;
}