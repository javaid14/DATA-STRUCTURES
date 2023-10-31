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
int isSorted(struct Node *p)
{
    int x = -32768;
    p = first;
    while (p!= NULL)
    {
        if (p->data < x)
        {
            return 0;
        }
        x = p->data;
        p = p->next;

    }
    return 1;
}
int main()
{
    int A[]={10,20,30,40,50};
    create(A,5);
    Display(first);
    printf("\nLinked list Sorted: %d\n",isSorted(first));
    return 0;
}