#include <iostream>
using namespace std;

int main()
{
    char str[] = "Please do open contribution";
    int i, words = 1;

    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i -1] != ' '){
            words++;
        }
    }
    cout<<words;
}