#include <iostream>
using namespace std;

int main()
{
    char str[] = "Always Carry Powerbank";
    int i, vowel = 0, consonant = 0;

    for (i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            consonant++;
        }
    }
    cout << "Vowel in str -" << " " << vowel << endl;
    cout << "Consonant in str -" << " " << consonant;
}