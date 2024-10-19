#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout << "Enter the size of stack";
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void display(struct Stack st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}

void push(struct Stack *str, int value)
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

void peek(struct Stack *str, int pos)
{
    int x = -1;
    int index = str->top - pos + 1;
    if (pos < 0)
    {
        cout << "Invalid position";
        cout << endl;
    }
    else
    {
        x = str->S[index];
    }
    cout << "The value is " << x;
}

int main()
{
    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    display(st);
    peek(&st, 2);
}