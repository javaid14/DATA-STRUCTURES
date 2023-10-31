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

void display(struct Node*p)
{
    while (p!=NULL)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
}
int max(struct Node *p)
{
    int m = -32768;
    while (p)
    {
        if(p->data > m)
        {
            m = p->data;
        }
        p = p->next;
    }
    return m;
}
int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};

    create(A,8);
    printf("Maximum is :%d",max(first));
    return 0;
}