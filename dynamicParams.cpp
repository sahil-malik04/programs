#include <iostream>
using namespace std;

template <class U>
class user
{
private:
    U number;

public:
    user(U number);
    U age();
};

template <class U>
user<U>::user(U number)
{
    this->number = number;
};

template <class U>
U user<U>::age()
{
    return number + 1;
};

int main()
{
    user<float> us(25.5);
    cout << "Exceeding age with " << us.age();
}