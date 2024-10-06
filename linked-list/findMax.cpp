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

int max(struct Node *p)
{
    int m = 0;
    while (p != NULL)
    {   
        if(p->data > m)
        m = p->data;
        p = p->next;
    }
    return m;
}


int main()
{
    int A[] = {3, 15, 7, 10};
    create(A, 4);
    int c = max(first);
    cout << c;
}