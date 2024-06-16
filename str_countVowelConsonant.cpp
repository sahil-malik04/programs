#include <iostream>
using namespace std;

int main()
{
    char str[] = "Please do open contribution";
    int i, vcount = 0, ccount = 0;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vcount++;
        }
        else if (str[i] > 65 && str[i] <= 90 || (str[i] >= 97 && str[i] <= 122))
        {
            ccount++;
        }
    }
    cout << vcount;
    cout << ccount;
}