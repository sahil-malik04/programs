#include <iostream>
using namespace std;

void gcd(int a, int b)
{
    for (int i = min(a, b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << i;
            break;
        }
    }
}

int main()
{
    int a = 20;
    int b = 40;
    gcd(a, b);
}