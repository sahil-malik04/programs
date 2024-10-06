#include <iostream>
using namespace std;

int calculation(int type, int a, int b)
{
    int result;
    switch (type)
    {
    case 1:
        result = a + b;
        break;
    case 2:
        result = a - b;
        break;
    case 3:
        result = a * b;
        break;
    case 4:
        result = a / b;
        break;

    default:
        break;
    }
    return result;
}

int main()
{
    int a, b, type;
    cout << "Enter the operation you want to perform" << endl;
    cout << "1.Addition ";
    cout << "2.Subtraction ";
    cout << "3.Multiplication ";
    cout << "4.Division ";
    cin >> type;

    cout << "Enter the first number";
    cin >> a;
    cout << "Enter the Second number";
    cin >> b;

    int result = calculation(type, a, b);
    cout << "Result is " << result;
}