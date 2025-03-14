#include <iostream>
using namespace std;

void extraction(int number)
{
    while (number > 0)
    {
        int lastDigit = number % 10;
        cout << lastDigit << " ";
        number = number / 10;
    }
}

int main()
{
    int number = 7789;
    extraction(number);
}