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

// int count(struct Node *p)
// {
//     int n = 0;
//     while (p != NULL)
//     {
//         n++;
//         p = p->next;
//     }
//     return n;
// }

// with recursion
int count(struct Node *p)
{
    if (p == 0)
    {
        return 0;
    }
    else
    {
        return count(p->next) + 1;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10};
    create(A, 4);
    int c = count(first);
    cout << c;
}