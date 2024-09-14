#include <iostream>
using namespace std;

int main()
{
    int *p;
    p = new int[4];
    p[0] = 25;
    p[1] = 42;
    p[2] = 48;
    p[3] = 52;

    //
    int *q;
    q = new int[6];

    for (int i = 0; i < 4; i++)
    {
        q[i] = p[i];
    }
    // release memory
    delete[] p;
    p = q;
    q = NULL;

    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << endl;
    }
}