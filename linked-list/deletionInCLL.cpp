#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *Head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void deletion(struct Node *p, int pos)
{
    struct Node *q;

    if (pos == 0)
    {
        while (p->next != Head)
        {
            p = p->next;
        }
        p->next = Head->next;
        delete Head;
        Head = p->next;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            p = p->next;
        }
        q = p->next;
        p->next = q->next;
        delete q;
    }
}

void Display(struct Node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != Head);
}

int main()
{
    int A[] = {3, 5, 7, 10};
    create(A, 4);
    deletion(Head, 2);
    Display(Head);
}