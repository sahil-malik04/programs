#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "civic";
    int length = strlen(str);

    bool isPallindrome = true;
    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPallindrome = false;
            break;
        }
    }

    if (isPallindrome)
    {

        cout << "String is pallindrome";
    }
}