#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

struct Node
{
    int data;
    struct Node*next;
}*top = NULL;

void Display()
{
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}

void push(int x)
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    if (t==NULL)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        t->data = x;
        t->next =top;
        top = t;
    }  
}

//POP
int pop()
{
    struct Node * p;
    int x  = -1;
    if (top == NULL)
    {
        printf("\nSTACK IS EMPTY\n");
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        free (p);
    }
    return x; 
}

//PEEK
int peek(int pos)
{
    int x = -1;
    struct Node * p = top;
    for (int  i = 0; p!=NULL && i < pos-1; i++)
    {
        p = p->next;
    }
    if (p!=NULL)
    {
        return p->data;
    }
    else
       return -1;  
}

//ISEMPTY
int isEmpty()
{
    if (top == NULL)
    {
        printf("\nSTACK EMPTY\n");
    }
    else
        printf("\nNOT EMPTY\n");
}

//STACKTOP
int stackTop()
{
    if (top)
    {
        return top->data;
    }
    else
        return -1;
}

//isFULL

int isFull()
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    int r = t?1:0;
    free(t);
    return r;
}

int main()
{
    push(10);
    push(20);
    push(30);
 
    Display();

    printf("\n%d",stackTop());
    
    printf("\n%d ",pop());

    
    return 0;
}