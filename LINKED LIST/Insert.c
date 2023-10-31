#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
struct Node
{
    int data;
    struct Node *next;

}*first = NULL;

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

void Insert (struct Node *p,int pos, int x)
{
    struct Node *t;
    if (pos < 0 || pos > count(p))
        return;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if (pos == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
           p=p->next;
           t->next=p->next;
           p->next=t; 
        }
        
    }
}

int main()
{
    Insert(first,0,8);
    Insert(first,0,3);
    Insert(first,4,6);
    Display(first);

    return 0;
}