#include <iostream>
using namespace std;

int climbStairs(int n)
{
    if (n <= 2)
        return n;
    int curr, prev2 = 1, prev1 = 2;
    for (int i = 3; i <= n; i++)
    {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}

int main()
{
    int n = 5;
    cout << "Ways to climb are- " << climbStairs(n) << endl;
    return 0;
}
