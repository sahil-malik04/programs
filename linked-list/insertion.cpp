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

void insert(struct Node *p, int index, int element)
{

    struct Node *t;

    if (index < 0)
    {
        return;
    }
    t = new Node;
    t->data = element;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1 && p != NULL; i++)
        {
            p = p->next;
        }
        if (p != NULL)
        {
            t->next = p->next;
            p->next = t;
        }
    }
}

int main()
{
    int A[] = {3, 5, 7, 10};
    create(A, 4);

    int keyToInsert = 8;
    int index = 3;

    insert(first, index, keyToInsert);

    display(first);
}