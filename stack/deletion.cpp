#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *str)
{
    cout << "Enter the size of stack";
    cin >> str->size;
    str->top = -1;
    str->S = new int[str->size];
}

void insert(struct Stack *str, int value)
{
    if (str->top == str->size - 1)
    {
        cout << "Stack overflow";
        cout << endl;
    }
    else
    {
        str->top++;
        str->S[str->top] = value;
    }
}

void pop(struct Stack *str)
{
    int x = -1;
    if (str->top == -1)
    {
        cout << "Stack underflow";
    }
    else
    {
        x = str->S[str->top];
        str->top--;
    }
}

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
}

int main()
{
    struct Stack st;
    create(&st);

    insert(&st, 10);
    insert(&st, 15);
    insert(&st, 18);
    insert(&st, 18);
    pop(&st);
    display(st);
}