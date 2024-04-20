#include <iostream>
using namespace std;

class Arithmetic
{
private:
    int a;
    int b;

public:
    Arithmetic(int a, int b);
    int add();
    int sub();
};

Arithmetic::Arithmetic(int a, int b)
{
    this->a = a;
    this->b = b;
};

int Arithmetic::add()
{
    int c;
    c = a + b;
    return c;
};

int Arithmetic::sub()
{
    int c;
    c = a - b;
    return c;
}

int main()
{
    Arithmetic ar(50, 35);
    cout << "The addition is " << ar.add() << endl;
    cout << "The subtraction is " << ar.sub();
}