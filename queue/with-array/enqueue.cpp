#include <iostream>
using namespace std;

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[size];
}

void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
    {
        cout << "Queue is full";
        cout << endl;
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

void display(struct Queue q)
{
    for (int i = q.front + 1; i <= q.rear; i++)
    {
        cout << q.Q[i] << " ";
    }
}

int main()
{
    struct Queue q;
    create(&q, 5);
    enqueue(&q, 10);
    enqueue(&q, 15);
    enqueue(&q, 18);
    enqueue(&q, 22);
    enqueue(&q, 28);
    enqueue(&q, 32);
    display(q);
}