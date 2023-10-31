#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

struct Stack 
{
    int size;
    int top;
    int *s;
};

void stCreate(struct Stack *st,int size)
{
  st->size = size;
  st->top = -1;
  st->s = (int *)malloc(st->size*sizeof(int));  
}
void push(struct Stack *st,int x)
{
    if (st->top == st->size-1)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}
int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    } 
    return x;
}
int IsEmpty(struct Stack st)
{
    if (st.top == -1)
    {
        return 1;
    }
    else
        return 0;

}

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void Enqueue(struct Queue *q, int x)
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

void create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->rear=0;
    q->Q=(int *)malloc(q->size*sizeof(int));
}


struct Node {
    struct Node*lchild;
    int data;
    struct Node*rchild;

};struct Node *root=NULL;

void TreeCreate()
{
    struct Node*p,*t;
    int x;
    struct Queue q;
    create(&q,100);

    printf("ENTER THE ROOT VALUE\n");
    scanf("%d",&x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild =NULL;
    Enqueue(&q,root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("ENTER THE LEFT CHILD\n");
        scanf("%d",&x);
        if (x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild =NULL;
            p->lchild = t;
            Enqueue(&q,t); 
        }

        printf("ENTER THE RIGHT CHILD\n");
        scanf("%d",&x);
        if (x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild =NULL;
            p->rchild = t;
            Enqueue(&q,t);
        }
    }
}

void Preorder(struct Node *p)
{
 if(p)
 {
    printf("%d ",p->data);
    Preorder(p->lchild);
    Preorder(p->rchild);
 }
}

void iterPre(struct Node *t)
{
    struct Stack st;
    stCreate(&st,100);
    while (t!=NULL || !IsEmpty(st))
    {
        if (t!=NULL)
        {
            printf("%d ",t->data);
            push(&st,t);
            t= t->lchild;
        }
        else
        {
            t=pop(&st);
            t=t->rchild;
        }
    }
}

void Postorder(struct Node *p)
{
 if(p)
 {
 
    Postorder(p->lchild);
    Postorder(p->rchild);
    printf("%d ",p->data);

 }
}
void iterPost(struct Node *t)
{
    struct Stack st;
    stCreate(&st,100);
    long int temp;

    while (t!=NULL || !IsEmpty(st))
    {
        if (t!=NULL)
        {
            push(&st,t);
            t= t->lchild;
        }
        else
        {
            temp = pop(&st);
            if(temp>0)
            {
                push(&st,-temp);
                temp = t->rchild;
            }
            else
            {
                printf("%d ",temp);
                t=NULL;
            }  
        }
    }
}

void LevelOrder(struct Node *p)
{
    struct Queue q;
    create(&q,100);
 
    printf("%d ",p->data);
    Enqueue(&q,p);
 
    while(!isEmpty(q))
    {
        p = dequeue(&q);
        if(p->lchild)
        {
            printf("%d ",p->lchild->data);
            Enqueue(&q,p->lchild);
        }
        if(p->rchild)
        {
            printf("%d ",p->rchild->data);
            Enqueue(&q,p->rchild);
        }
    }
}

void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

void iterIn(struct Node *t)
{
    struct Stack st;
    stCreate(&st,100);
    while (t!=NULL || !IsEmpty(st))
    {
        if (t!=NULL)
        {
            push(&st,t);
            t= t->lchild;
        }
        else
        {
            t=pop(&st);
            printf("%d ",t->data);
            t=t->rchild;
        }
    }
}
int count(struct Node *p)
{
    int x,y;
    if (p!=NULL)
    {
        x = count(p->lchild);
        y = count(p->rchild);
        if (p->lchild && p->rchild)
        {
            return x + y +1;

        }
        else
        {
            return x+y;
        }
        return 0;
    }
    
} 

int height(struct Node *root)
{
    int x=0,y=0;
    if(root==0)
        return 0;
    x=height(root->lchild);
    y=height(root->rchild);
    if(x>y)
        return x+1;
    else
        return y+1;
 
} 

int main()
{
    TreeCreate();
    printf("\npre order:");
    Preorder(root);
    printf("\npost order:");
    Postorder(root);
    printf("\nInorder:");
    Inorder(root);
    printf("\nIterative preorder: ");
    iterPre(root);
    printf("\nIterative  INorder: ");
    iterIn(root);

    printf("\nIterative postorder: ");
    iterPost(root);

    printf("\nLevel order: ");
    LevelOrder(root);

    printf("\nNOdes :%d ",count(root)); 
    printf("\nHeight :%d",height(root)); 
    return 0;
}