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

// tortoise and hare algo
void findMiddle(struct Node *p, int size)
{
    struct Node *slow = first;
    struct Node *fast = first;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle element is- " << slow->data << endl;
}

int main()
{
    int arr[5] = {10, 66, 32, 70, 90};
    int size = 5;
    create(arr, size);
    findMiddle(first, size);
    display(first);
}