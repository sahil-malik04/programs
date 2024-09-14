#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, n - 1) * m;
    }
}

// optimize
int optimizePow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return pow(m * m, n / 2);
    }
    else
    {
        return m * pow(m * m, (n - 1) / 2);
    }
}

int main()
{
    int result1 = pow(2, 9);
    int result2 = optimizePow(2, 9);
    cout << result1<<endl;
    cout << result2;
}