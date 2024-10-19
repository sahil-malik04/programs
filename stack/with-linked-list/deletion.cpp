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

int main()
{
    push(10);
    push(20);
    push(30);
    pop();
    display();
}