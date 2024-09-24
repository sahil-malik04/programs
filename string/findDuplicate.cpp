#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[] = "alaxaii";
    int duplicateCount = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
    {

        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                duplicateCount++;
            }
        }
    }
    cout << duplicateCount << " " << "found";
}