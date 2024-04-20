#include <iostream>
using namespace std;

struct Rectangle
{
    int length = 0;
    int breadth = 0;
} r;

int area(struct Rectangle r)
{
    return r.length * r.breadth;
};

int perimeter(struct Rectangle r)
{
    return 2 * (r.length + r.breadth);
};

int main()
{
    int areaResult;
    int periResult;
    cout << "Enter the length";
    cin >> r.length;
    cout << "Enter the breadth";
    cin >> r.breadth;

    areaResult = area(r);
    periResult = perimeter(r);
    cout << "The area of rectangle is" << areaResult << endl;
    cout << "The perimeter of rectangle is" << periResult;
}