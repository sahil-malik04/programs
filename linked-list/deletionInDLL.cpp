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

void deletion(struct Node *p, int index)
{

    if (index == 0)
    {
        p = first;
        first = first->next;
        delete p;
        if (first)
            first->prev = NULL;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        delete p;
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
    deletion(first, 2);
    Display(first);
}