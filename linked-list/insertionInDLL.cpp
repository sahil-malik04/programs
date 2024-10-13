#include <iostream>
using namespace std;

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = new Node;
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void insert(struct Node *p, int index, int value)
{

    struct Node *t;

    if (index < 0)
    {
        return;
    }
    if (index == 0)
    {
        t = new Node;
        t->data = value;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new Node;
        t->data = value;
        t->prev = p;
        t->next = p->next;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}

void Display(struct Node *p)
{

    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10};
    create(A, 4);
    insert(first, 3, 15);
    Display(first);
}