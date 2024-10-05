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

// int sum(struct Node *p)
// {
//     int sum = 0;
//     while (p != NULL)
//     {
//         sum = sum + p->data;
//         p = p->next;
//     }
//     return sum;
// }

// with recursion
int sum(struct Node *p)
{
    if(p == 0){
        return 0;
    }else{
        return sum(p->next) + p->data;
    }
}


int main()
{
    int A[] = {3, 5, 7, 10};
    create(A, 4);
    int c = sum(first);
    cout << c;
}