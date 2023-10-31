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

int Delete(struct Node *p,int pos)
{
    struct Node *q;
    int x = -1,i;
    if(pos == 1)
    {
        x = first->data;
        p = first;
        first = first->next;
        free (p);

    }
    else
    {
        p = first;
        q = NULL;
        for ( i = 0; i < pos -1 && p; i++)
        {
            q=p;
            p = p->next;
        }
        if(p)
        {
            q->next = p->next;
            x = p->data;
            free (p);
        }
    }
    return x;
}
int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
 
    Delete(first,2);

    Display(first);
    return 0;
}