#include <iostream>
#include <unordered_map>
using namespace std;

bool canConstruct(char ransomNote[], char magazine[])
{
    std::unordered_map<char, int> charFrequency;

    for (int i = 0; magazine[i] != '\0'; i++)
    {
        charFrequency[magazine[i]]++;
    }

    for (int i = 0; ransomNote[i] != '\0'; i++)
    {
        if (charFrequency[ransomNote[i]] > 0)
        {
            charFrequency[ransomNote[i]]--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char str1[] = "aa";
    char str2[] = "aab";
    cout << canConstruct(str1, str2);
}