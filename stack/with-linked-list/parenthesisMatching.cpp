#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "Stack is full";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

void display()
{
    struct Node *p;
    p = top;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void pop()
{
    struct Node *t;

    if (top == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        t = top;
        top = top->next;
        delete t;
    }
}

int isBalanced(char *exp)
{
    int i;

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (top == NULL)
            {
                return 0;
            }
            pop();
        }
    }
    return top == NULL ? 1 : 0;
}

int main()
{
    char *exp = "((a+b)*(c-d))";
    cout << isBalanced(exp);
}