#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

struct Node
{
    int data;
    struct Node *next;

}*Head;

//CREATE LINKEDLIST
void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    Head =(struct Node *)malloc(sizeof(struct Node));
    Head->data=A[0];
    Head->next=NULL;
    last=Head;

 for(i=1;i<n;i++)
 {
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
 }
}

//ITERATIVE DISPLAY
void Display(struct Node *h)
{
    do
    {
        printf("%d  ",h->data);
        h = h->next;
    } while (h!=Head);
    
}


//DISPALY RECURSIVELY
void Rdisplay(struct Node *h)
{
    static int flag = 0;
    if (h != Head || flag == 0)
    {
        flag = 1;
        printf("%d ", h->data);
        Rdisplay(h->next);
    }
    flag =  0;
}

//INSERT IN CIRCULAR LL
void Insert(int pos,int x)
{
    struct Node *t,*p;
    int i;
    if (pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;

        }
        else
        {
            p = Head;
            while (p ->next != Head)
            {
                p = p->next;
                p->next = t;
                t->next = Head;
                Head = t;

            }
            
        }
        
    }
    else
    {
        p = Head;
        for ( i = 0; i < pos-1; i++)
        {
            p = p->next;
            t =(struct Node *) malloc(sizeof(struct Node));
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
        
    }
    
    
}
int main()
{
    int pos,x;
    int A[] = {2,4,5,6,7};
    create(A,5);

    Display(Head);

    printf("\nEnter the Element to be inserted with position and value");
    scanf("%d%d",&pos,&x);

    Insert(pos,x);

    Display(Head);

    return 0;
}