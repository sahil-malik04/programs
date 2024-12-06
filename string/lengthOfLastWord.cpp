#include <iostream>
#include <string>
using namespace std;

int countLength(string str)
{
    int i = str.size() - 1;
    int length = 0;

    while (i >= 0)
    {
        if (str[i] != ' ')
        {
            length++;
        }
        else if (length > 0)
        {
            break;
        }
        i--;
    }
    return length;
}

int main()
{
    string str = "Hello World";
    cout << countLength(str);
}