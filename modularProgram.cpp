// calculate the area & parimeter of rectangle
#include <iostream>
using namespace std;

int area(int l, int b)
{
    return l * b;
}

int perimeter(int l, int b)
{
    return 2 * (l + b);
}

int main()
{
    int l = 0;
    int b = 0;
    int areaResult;
    int periResult;

    cout << "Enter the length";
    cin >> l;
    cout << "Enter the breadth";
    cin >> b;

    areaResult = area(l, b);
    periResult = perimeter(l, b);
    cout << "The area of rectangle is" << areaResult << endl;
    cout << "The perimeter of rectangle is" << periResult;
}