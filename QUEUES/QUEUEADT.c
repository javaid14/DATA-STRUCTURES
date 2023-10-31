#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//Queues

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void Enqueue(struct Queue *q,int x)
{
    if (q->rear == q->size)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear++;
        q->Q[q->rear] = x;

    }
    
}

int dequeue(struct Queue *q)
{
    int x = -1;
    if (q->front == q->rear)
    {
        printf("\nQueue is Empty \n");
    }
    else
    {
        q->front ++;
        x = q->Q[q->front];
    }
    return x;
    
}

int isEmpty(struct Queue q)
{
 return q.front==q.rear;
}

void Display(struct Queue *q)
{
    if (q->front == q->rear)
    {
        printf("\nQueue is Empty \n");
    }
    else
    {
        printf("\nElements of Queue are :\n");
        for(int i = 0;i<=q->size-1;i++)
        {
            printf("%d ",i);
        }
    }
    
}



int main()
{
    struct Queue q;
    printf("\nEnter the size of queue\n");
    scanf("%d",&q.size);

    q.Q = (int *)malloc(q.size*sizeof(int));

    Enqueue(&q,4);

    Display(&q);
    return 0;
}