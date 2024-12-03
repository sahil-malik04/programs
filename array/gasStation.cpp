#include <iostream>
using namespace std;

int canCompleteCircuit(int gas[], int cost[], int length)
{
    int startIndex = 0;
    int currGas = 0;
    int totalGas = 0;

    for (int i = 0; i < length; i++)
    {

        currGas += gas[i] - cost[i];
        totalGas += gas[i] - cost[i];

        if (currGas < 0)
        {
            startIndex = i + 1;
            currGas = 0;
        }
    }
    return totalGas >= 0 ? startIndex : -1;
}

int main()
{
    int gas[5] = {1, 2, 3, 4, 5};
    int cost[5] = {3, 4, 5, 1, 2};
    int length = sizeof(gas) / sizeof(gas[0]);
    cout << canCompleteCircuit(gas, cost, length);
}