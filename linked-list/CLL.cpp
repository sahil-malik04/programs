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

// void Display(struct Node *p)
// {
//     do
//     {
//         cout << p->data << " ";
//         p = p->next;
//     } while (p != Head);
// }

// with recursion
void Display(struct Node *p)
{
    static int flag = 0;
    if (p != Head || flag == 0)
    {
        flag = 1;
        cout << p->data << " ";
        Display(p->next);
    }
    flag = 0;
}

int main()
{
    int A[] = {3, 5, 7, 10};
    create(A, 4);
    Display(Head);
}