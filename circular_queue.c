#include<stdio.h>
#include<stdlib.h>

struct cirQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct cirQueue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct cirQueue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct cirQueue *q, int val)
{
    if(isFull(q))
    {
        printf("Queue is full\n");
    }
    else
    {
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}

int dequeue(struct cirQueue *q)
{
    int val=-1;
    if(isEmpty(q))
    {
        printf("Queue is empty\n");
        return val;
    }
    else
    {
        q->f=(q->f+1)%q->size;
        val=q->arr[q->f];
        return val;
    }
}
int main()
{
    struct cirQueue *q=(struct cirQueue*)malloc(sizeof(struct cirQueue));
    q->size=5;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    return 0;
}