#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *rear = NULL;

void enqueue(int x)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "Queue is full";
    }
    else
    {
        t->data = x;
        t->next = NULL;
        if (first == NULL)
        {
            first = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

void dequeue()
{
    int x = -1;
    struct Node *t;

    if (first == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        t = first;
        first = first->next;
        delete t;
    }
}

void display()
{
    struct Node *p = first;
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    enqueue(10);
    enqueue(12);
    enqueue(15);
    enqueue(25);
    dequeue();
    display();
}