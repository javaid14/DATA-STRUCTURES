#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

//Using Linked List
struct Node
{
    char data;
    struct Node*next;
}*top = NULL;


void push(char x)
{
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    if (t==NULL)
    {
        printf("\nSTACK OVERFLOW\n");
    }
    else
    {
        t->data = x;
        t->next =top;
        top = t;
    }  
}

//POP
int pop()
{
    struct Node * p;
    char x  = -1;
    if (top == NULL)
    {
        printf("\nSTACK IS EMPTY\n");
    }
    else
    {
        p = top;
        top = top->next;
        x = p->data;
        free (p);
    }
    return x; 
}

//PARENTHESIS MATCHING
int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        push(exp[i]);
        else if(exp[i]==')')
        {
            if(top==NULL)
                return 0;
            else
                pop();
        }
    }
    if(top==NULL)
        return 1;
    else
        return 0;
}


int main()
{
    char *exp = "((a+b)*(c-d))";

    printf("\n%d",isBalanced(exp));

    return 0;
}