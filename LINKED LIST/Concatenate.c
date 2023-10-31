#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

struct Node
{
    int data;
    struct Node *next;

}*first = NULL ,*second =NULL;

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

void create2(int A[],int n)
{
    int i;
    struct Node *t,*last;
    second =(struct Node *)malloc(sizeof(struct Node));
    second->data=A[0];
    second->next=NULL;
    last=second;

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

void concat(struct Node*p,struct Node*q)
{
    p=first;
    while (p->next != NULL)
    {
        p=p->next;
    }
    p->next =second;
    second = NULL;

}

int main()
{
    int A[]={10,20,40,50,60}; 
    int B[]={15,18,25,30,55};

    create(A,5);
    create2(B,5);

    Display(first);
    printf("\n");
    Display(second);
    printf("\n");

    concat(first,second);
    Display(first);

    return 0;
}