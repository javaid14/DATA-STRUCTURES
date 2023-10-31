#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
struct Node
{
    int data;
    struct Node *next;

}*first = NULL,*second =NULL;

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first =(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

 for(i=1;i<n;i++)
 {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
 }
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
}
int count(struct Node*p)
{
    int c = 0;
    while (p!=0)
    {
        c++;
        p=p->next;
    }
    return c;
}

void Reverse(struct Node *P)
{
    struct Node *p = first;
    struct Node *q=NULL,*r=NULL;
    while (p!=0)
    {
        r=q;
        q=p;
        p=p->next;

        q->next=r;
    }
    first = q;
}

void ReverseR(struct Node *q,struct Node *p)
{
    if (p!=NULL)
    {
        ReverseR(p,p->next);
        p->next = q;

    }
    else
    first = q;
}
int main()
{
    int A[] = {2,4,6,8,9};
    create(A,5);
    Display(first);

    ReverseR(second,first);
    printf("\n");

    Display(first);

    return 0;
}