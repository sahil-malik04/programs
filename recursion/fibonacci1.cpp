#include <iostream>
using namespace std;
int a = 0, b = 1;

void recursion(int n)
{
    int c;
    if (n > 0)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        recursion(n - 1);
    }
}

int main()
{
    int n;
    cout << "Enter the numbers you want to print";
    cin >> n;
    cout << a << " " << b << " ";
    recursion(n - 2);
}