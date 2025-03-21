#include <iostream>
using namespace std;

bool checkPallindrome(int number)
{
    int numberCopy = number;
    int reverseNumber = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    if (numberCopy == reverseNumber)
        return true;
    return false;
}

int main()
{
    int number = 12321;
    cout << checkPallindrome(number);
}