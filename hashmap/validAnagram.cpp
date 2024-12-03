#include <iostream>
#include <unordered_map>
using namespace std;

bool isValidAnagram(char s[], char t[], int length)
{
    unordered_map<char, int> freq;

    for (int i = 0; i < length; i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < length; i++)
    {
        if (freq.find(t[i]) == freq.end() || freq[t[i]] == 0)
        {
            return false;
        }
        freq[t[i]]--;
    }
    return true;
}

int main()
{
    char s[] = "anagram";
    char t[] = "nagaram";
    int length = sizeof(s) / sizeof(s[0]);
    bool isAnagram = isValidAnagram(s, t, length);
    if (isAnagram)
    {
        cout << "Given string is alagram";
    }
    else
    {
        cout << "Given string is not alagram";
    }
}