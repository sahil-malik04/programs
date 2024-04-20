#include <iostream>
using namespace std;

int area(int l, int b)
{
    l = 35;
    return l * b;
} // by value

// int area(int *l, int *b)
// {
//     *l = 35;
//     return *l * *b;
// } // by address

// int area(int &l, int &b)
// {
//     l = 35;
//     return l * b;
// } // by reference

int main()
{
    // calculate the area of rectangle
    int l = 10;
    int b = 20;
    int sum;
    sum = area(l, b); // pass by value
    // sum = area(&l, &b); //pass by address
    // sum = area(l, b); //pass by reference
    cout << sum;
    cout << l;
}