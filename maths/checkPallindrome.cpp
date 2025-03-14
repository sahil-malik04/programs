#include <iostream>
using namespace std;

bool checkPallindrome(int digit)
{
    int digitCopy = digit;
    int reverseNumber = 0;
    while (digit > 0)
    {
        int lastDigit = digit % 10;
        digit = digit / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    if (digitCopy == reverseNumber)
        return true;
    return false;
}

int main()
{
    int digit = 12321;
    cout << checkPallindrome(digit);
}