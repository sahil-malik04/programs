#include <iostream>
using namespace std;

int main()
{
    char str[] = "github";
    int i;

    for (i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {

            str[i] += 32;
        }
        else
        {
            str[i] -= 32;
        }
    }
    cout << str;
}