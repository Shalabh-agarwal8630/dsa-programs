#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("queue is full");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    int a=-1;
    if (isempty(q))
    {
        printf("stack is empty");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 2;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 34);
    enqueue(&q, 34);
    printf("dequeddd element is %d\n", dequeue(&q));
  //  printf("dequeddd element is %d\n", dequeue(&q));

    if (isempty(&q))
    {
        printf("queue is empty\n");
    }
    if (isfull(&q))
    {
        printf("queue is full\n");
    }
    return 0;
}
