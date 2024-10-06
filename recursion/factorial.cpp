#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return factorial(x - 1) * x;
    }
}

int main()
{
    int result = factorial(5);
    cout << result;
}