#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//Binary Search Tree
struct Stack 
{
    int size;
    int top;
    int *s;
};
void stCreate(struct Stack *st,int size)
{
  st->size = size;
  st->top = -1;
  st->s = (int *)malloc(st->size*sizeof(int));  
}
void push(struct Stack *st,int x)
{
    if (st->top == st->size-1)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
}

//POP
int pop(struct Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        printf("\nSTACK UNDERFLOW\n");
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    } 
    return x;
}
int stackTop(struct Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
        return st.s[st.top];

}




struct Node
{
 struct Node *lchild;
 int data;
 struct Node *rchild;
};struct Node * root=NULL;

struct Node * Search(int key)
{
    struct Node *t=root;
 
    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return NULL;
}

struct Node* Rsearch(struct Node * t,int key)
{
 
    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            return Rsearch(t->lchild, key);
        else
            return Rsearch(t->rchild, key);
        
    }
    return t;
}

void Insert(struct Node*t,int key)
{
    struct Node *r=NULL,*p;
    while(t!=NULL)
    {
        r=t;
        if(key<t->data)
            t=t->lchild;
        else if(key>t->data)
            t=t->rchild;
        else
            return;
    }
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;
 
    if(key<r->data) 
        r->lchild=p;
    else
         r->rchild=p;
}

void Rinsert(struct Node *p,int key)
{
    struct Node*t;
    if (p==NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;

    }
    if (key<p->data)
    {
        return Rinsert(p->lchild,key);

    }
    else if(key>p->data)
    {
        return Rinsert(p->rchild,key);
    }
}
void Inorder(struct Node *p)
{
    if(p)
    {
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

int Height(struct Node *p)
{
    int x,y;
    if(p==NULL)return 0;
        x=Height(p->lchild);
        y=Height(p->rchild);
    return x>y?x+1:y+1;
}

struct Node *InPre(struct Node *p)
{
    while(p && p->rchild!=NULL)
        p=p->rchild;
 
    return p;
}

struct Node *InSucc(struct Node *p)
{
    while(p && p->lchild!=NULL)
        p=p->lchild;
 
    return p;
}

struct Node *Delete(struct Node *p,int key)
{
    struct Node *q;
 
    if(p==NULL)
        return NULL;
    if(p->lchild==NULL && p->rchild==NULL)
    {
        if(p==root)
        root=NULL;
        free(p);
        return NULL;
 
    }
 
    if(key < p->data)
        p->lchild=Delete(p->lchild,key);
    else if(key > p->data)
        p->rchild=Delete(p->rchild,key);
    else
    {
        if(Height(p->lchild)>Height(p->rchild))
        {
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }
        else
        {
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
    }
    return p;
}
void BstCreate(int pre[],int n)
{
    struct Stack st;
    stCreate(&st,50);
    struct Node *t,*p;
    int i = 0;
    root = (struct Node*)malloc(sizeof(struct Node));
    root->data = pre[i++];
    root->lchild = root->rchild = NULL;
    p = root;
    while (i<n)
    {
        if (pre[i]<p->data)
        {
            t = (struct Node *)malloc (sizeof(struct Node));
            t->data = pre[i++];
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            push(&st,p);
            p=t;
        }
        else
        {
            if (pre[i]>p->data && pre[i] < stackTop(st))
            {
                t = (struct Node *)malloc (sizeof(struct Node));
                t->data = pre[i++];
                t->lchild = t->rchild = NULL;
                p->rchild = t;
                p=t;
                
            }
            else
            {
                p = pop(&st);
            }
        }
    }
}

int main()
{
    struct Node * temp;
    int A[] ={30,20,10,15,25,40,50,45};
    BstCreate(A,8);
    Inorder(root);

    Rinsert(root,50);
    Rinsert(root,10);
    Rinsert(root,40);
    Rinsert(root,20);
    Rinsert(root,30);
 
    Delete(root,30);
 
    Inorder(root);
    printf("\n");

    temp=Search(20);
    if(temp!=NULL)
        printf("\nelement %d is found\n",temp->data);
    else
        printf("\nelement is not found\n");

    return 0;
}