#include <iostream>
using namespace std;

int main()
{
    char str[] = "Always Carry Powerbank";
    int i, wordCount = 1;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i - 1] != ' ')
        {
            wordCount++;
        }
    }
    cout << "Words present in str -" << " " << wordCount;
}