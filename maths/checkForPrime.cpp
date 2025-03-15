#include <iostream>
using namespace std;

bool checkPrime(int number)
{
    int count = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return true;
    return false;
}

int main()
{
    int number = 17;
    cout << checkPrime(number);
}