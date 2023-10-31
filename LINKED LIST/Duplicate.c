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
void RemoveDuplicate(struct Node *p)
{
    p = first;
    struct Node *q  = first->next;
    while (q!=NULL)
    {
        if(p->data != q->data)
        {
            p = q;
            q = q->next;

        }
        else
        {
            p->next = q->next;
            free (q);
            q = p->next;
        }
        
    }
    
}

int main()
{
    int A[] = {2,4,8,8,9,9,9};
    create(A,7);
    Display(first);
    printf("\n");
    RemoveDuplicate(first);
    Display(first);

    return 0;
}