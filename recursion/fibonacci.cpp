#include <iostream>
using namespace std;

int fib(int y)
{
    if (y <= 1)
    {
        return y;
    }
    else
    {
        return fib(y - 2) + fib(y - 1);
    }
}

int main()
{
    int x = fib(7);
    cout << x;
}