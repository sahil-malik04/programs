#include <iostream>
using namespace std;

class Rectangle
{
public:
    int area(int length, int breadth)
    {
        return length * breadth;
    };
    int perimeter(int length, int breadth)
    {
        return 2 * (length + breadth);
    };
};

int main()
{
    Rectangle r;
    int length;
    int breadth;
    int areaResult;
    int perimeterResult;
    cout << "Enter the length";
    cin >> length;
    cout << "Enter the breadth";
    cin >> breadth;
    areaResult = r.area(length, breadth);
    perimeterResult = r.perimeter(length, breadth);
    cout << "The area of rectangle is " << areaResult << endl;
    cout << "The perimeter of rectangle is " << perimeterResult;
}