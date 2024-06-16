#include <iostream>
using namespace std;

int main()
{
    char str1[] = "throw";
    char str2[] = "throwaway";
    int i, j;
    for (i = 0, j = 0; str1 != '\0' && str2 != '\0'; i++, j++)
    {
        if (str1[i] != str2[i])
        {
            break;
        }
    }
    if (str1[i] == str2[i])
    {
        cout << "Strings are equal";
    }
    else if (str1[i] < str2[i])
    {
        cout << "First string comes first";
    }
    else
    {
        cout << "Second sting comes first";
    }
}