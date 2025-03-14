#include <iostream>
using namespace std;

void extraction(int digit)
{
    while (digit > 0)
    {
        int lastDigit = digit % 10;
        cout << lastDigit << " ";
        digit = digit / 10;
    }
}

int main()
{
    int digit = 7789;
    extraction(digit);
}