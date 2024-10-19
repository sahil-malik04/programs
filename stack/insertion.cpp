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

int main()
{
    struct Stack st;
    create(&st);

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    display(st);
}