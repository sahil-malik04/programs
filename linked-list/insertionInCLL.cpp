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

void insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if (index == 0)
    {
        t = new Node;
        t->data = x;
        while (p->next != Head)
        {
            p = p->next;
        }
        p->next = t;
        t->next = Head;
        Head = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
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
    insert(Head, 2, 15);
    Display(Head);
}