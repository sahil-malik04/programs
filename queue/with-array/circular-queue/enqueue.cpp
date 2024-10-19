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
    q->front = q->rear = 0;
    q->Q = new int[size];
}

void enqueue(struct Queue *q, int x)
{
    if (q->rear + 1 % q->size == q->front)
    {
        cout << "Queue is full";
    }
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

void display(struct Queue q)
{
    int i = q.front + 1;
    do
    {
        cout << q.Q[i];
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);

    cout << endl;
}

int main()
{
    struct Queue q;
    create(&q, 4);

    enqueue(&q, 10);
    enqueue(&q, 14);
    display(q);

}