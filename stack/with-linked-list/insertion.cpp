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

int main()
{
    push(10);
    push(20);
    display();
}