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

void reverseListRecursion(struct Node *q, struct Node *p)
{
    if (p)
    {
        reverseListRecursion(p, p->next);
        p->next = q;
    }
    else
    {

        first = q;
    }
}

int main()
{
    int A[] = {3, 5, 7, 7, 12, 15};
    create(A, 6);

    reverseListRecursion(NULL, first);

    display(first);
}