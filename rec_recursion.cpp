#include <iostream>
using namespace std;

void recursiveFun(int n)
{
    if (n > 0)
    {
        recursiveFun(n - 1);
        cout << n;
    }
}

int main()
{
    int x = 3;
    recursiveFun(x);
}