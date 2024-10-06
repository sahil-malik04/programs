#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p)
{

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void deletion(struct Node *p, int pos)
{
    struct Node *q;
    int x = -1;

    if (pos == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
    }
    else
    {
        for (int i = 0; i < pos - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 12};
    create(A, 5);

    int position = 3;

    deletion(first, position);

    display(first);
}