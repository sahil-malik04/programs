#include <iostream>
using namespace std;

int countDigits(int number)
{
    int count = 0;
    while (number > 0)
    {
        count++;
        number = number / 10;
    }
    return count;
}

int main()
{
    int number = 749000;
    cout << "Total Digits are: " << countDigits(number);
}