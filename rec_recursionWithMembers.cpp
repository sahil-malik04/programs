#include <iostream>
using namespace std;

int func1(int n)
{
    if (n > 0)
    {
        return func1(n - 1) + n;
    };
}

int main()
{
    int a = 5;
    cout << func1(a);
}