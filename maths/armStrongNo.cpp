#include <iostream>
using namespace std;

bool checkArmStrong(int number)
{
    int numberCopy = number;
    int sum = 0;
    while (number > 0)
    {
        int lastDigit = number % 10;
        sum += (lastDigit * lastDigit * lastDigit);
        number = number / 10;
    }
    if (numberCopy == sum)
        return true;
    return false;
}

int main()
{
    int number = 35;
    cout << checkArmStrong(number);
}