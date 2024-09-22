#include <iostream>
using namespace std;

bool validate(char str[])
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (!(str[i] >= 65 && str[i] <= 90) &&
            !(str[i] >= 97 && str[i] <= 122))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str[] = "Always1";

    if (validate(str))
    {
        cout << "String is valid";
    }
    else
    {
        cout << "Invalid string";
    }
}