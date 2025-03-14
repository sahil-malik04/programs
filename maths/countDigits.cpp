#include <iostream>
using namespace std;

int countDigits(int digit)
{
    int count = 0;
    while (digit > 0)
    {
        count++;
        digit = digit / 10;
    }
    return count;
}

int main()
{
    int digit = 749000;
    cout << "Total Digits are: " << countDigits(digit);
}