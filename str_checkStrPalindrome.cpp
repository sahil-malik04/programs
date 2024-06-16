#include <iostream>
using namespace std;

int main()
{
    char str[] = "racecar";
    int i, j;
    bool isPalindrome = true;
    int length = sizeof(str) / sizeof(str[0]) - 1;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
    {
        cout << "string is a palindrome";
    }
    else
    {
        cout << "string is not a palindrome";
    }
    return 0;
}