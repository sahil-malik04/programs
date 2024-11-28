#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int arr[], int size)
{
    struct Node *t, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < size; i++)
    {
        t = new Node;
        t->data = arr[i];
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

void findMiddle(struct Node *p, int size)
{
    int count = 0;

    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    int mid = (count / 2) + 1;
    p = first;

    while (p != NULL)
    {
        mid -= 1;
        if (mid == 0)
        {
            break;
        }
        p = p->next;
    }
    cout << count << " -count" << endl;
    cout << mid << " -mid" << endl;
    cout << p->data << " -node" << endl;
}

int main()
{
    int arr[5] = {10, 66, 32, 70, 90};
    int size = 5;
    create(arr, size);
    findMiddle(first, size);
    display(first);
}