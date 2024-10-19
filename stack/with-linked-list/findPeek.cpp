#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
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

void peek(int pos)
{
    struct Node *p;
    p = top;

    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    if (p != NULL)
    {
        cout << "Value is " << p->data;
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
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(25);
    display();
    peek(1);
}