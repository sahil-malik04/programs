#include <iostream>
using namespace std;

int main()
{
    int *p;
    int *q;

    p = new int[4];
    p[0] = 20;
    p[1] = 7;
    p[2] = 12;
    p[3] = 10;

    q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete[] p;
    p = q;
    q = NULL;

    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << endl;
    }
}