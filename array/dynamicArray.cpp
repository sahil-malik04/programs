#include <iostream>
using namespace std;

int main()
{
    int *p;
    int val;


    cout<<"Enter the value of array size";
    cin>>val;
    p = new int[val];
    p[0] = 50;
    p[1] = 20;
    p[2] = 25;
    p[3] = 45;
    p[4] = 55;


    for (int i = 0; i < val; i++)
    {
        cout << p[i]<<" ";
    }
}