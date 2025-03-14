#include <iostream>
using namespace std;

void checkDivisors(int number)
{

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int number = 36;
    checkDivisors(number);
}