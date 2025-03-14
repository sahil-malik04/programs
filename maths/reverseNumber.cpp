#include <iostream>
using namespace std;

int reverse(int digit)
{
    int reverseNumber = 0;
    while (digit > 0)
    {
        int lastDigit = digit % 10;
        digit = digit / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    return reverseNumber;
}

int main()
{
    int digit = 77895;
    cout << "The reverse result is: " << reverse(digit);
}