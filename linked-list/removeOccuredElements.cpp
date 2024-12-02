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

void removeOccured(struct Node *p, int valuesToRemove)
{
    while (p != NULL && p->data == valuesToRemove)
    {
        struct Node *temp = p;
        p = p->next;
        delete temp;
    }

    struct Node *q = p;

    while (q != NULL && q->next != NULL)
    {
        if (q->next->data == valuesToRemove)
        {
            struct Node *temp = q->next;
            q->next = q->next->next;
            delete temp;
        }
        else
        {
            q = q->next;
        }
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

int main()
{
    int A[] = {3, 5, 7, 10, 7}; // output [3, 5, 10]
    create(A, 4);

    int keyToInsert = 8;
    int index = 3;

    int valuesToRemove = 7;
    removeOccured(first, valuesToRemove);
    display(first);
}