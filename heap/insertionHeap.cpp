#include <iostream>
using namespace std;

void insert(int H[], int pos)
{
    int i = pos, temp;
    temp = H[i];
    while (i > 1 && temp > H[i / 2])
    {
        H[i] = H[i / 2];
        i = i / 2;
    }
    H[i] = temp;
}

void display(int H[])
{
    for (int i = 1; i <= 7; i++)
    {
        cout << H[i] << " ";
    }
}

int main()
{
    int H[] = {0, 10, 20, 30, 25, 5, 40, 35};
    int i;

    for (i = 2; i <= 7; i++)
    {
        insert(H, i);
    }

    display(H);
    return 0;
}