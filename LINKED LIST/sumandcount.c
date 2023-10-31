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

void Rdisplay(struct Node*p)
{
    if (p!=NULL)
    {
        printf("%d\n",p->data);
        Rdisplay(p->next);
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
int Rcount(struct Node*p)
{
    if (p==0)
    {
        return 0;
    }
    else
    {
        return count(p->next) +1;
    }
}

int sum(struct Node*p)
{
    int sum = 0;
    while (p)
    {
        sum = sum +  p->data;
        p = p->next;
    }
    return sum;
    
}

int Rsum(struct Node *p)
{
    if (p==0)
    {
        return 0;
    }
    return Rsum(p->next) + p->data;
    
}
int main()
{
    struct Node *temp;
    int A[]={3,5,7,10,25,8,32,2};

    create(A,8);
    printf("count is :%d",count(first));
    printf("\nSum is :%d",sum(first));


    return 0;
}