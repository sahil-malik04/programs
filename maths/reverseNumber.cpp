#include <iostream>
using namespace std;

int reverse(int number)
{
    int reverseNumber = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        number = number / 10;
        reverseNumber = (reverseNumber * 10) + lastDigit;
    }
    return reverseNumber;
}

int main()
{
    int number = 77895;
    cout << "The reverse result is: " << reverse(number);
}