#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//Stack

//STRUCTURE OF STACK
struct Stack 
{
    int size;
    int top;
    int *s;
};

//CReate stack 
void create(struct Stack *st)
{
  printf("Enter the size of stack\n");
  scanf("%d",&st->size);
  st->top = -1;
  st->s = (int *)malloc(st->size*sizeof(int));  
}

//Display
void Display(struct Stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    printf("%d ",st.s[i]);
    printf("\n");
 
}

//PUSH
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

//PEEK
int peek(struct Stack st,int pos)
{
    int x = -1;
    if (st.top - pos + 1 < 0)
    {
        printf("\nINVALID POSITION\n");
    }
    else
    {
        x = st.s[st.top-pos+1];
    }
    return x;
}

//IS EMPTY

int isEmpty(struct Stack st)
{
    if (st.top == -1)
    {
        printf("\nSTACK IS EMPTY\n");
    }
    else
        printf("\nSTACK IS NOT EMPTY\n");

}

//ISFULL

void isFull(struct Stack st)
{
    if (st.top == st.size-1)
    {
        printf("\nSTACK IS FULL\n");
    }
    else
        printf("\nSTACK IS NOT FULL\n");

}

//STACKTOP
int stackTop(struct Stack st)
{
    if (st.top == -1)
    {
        return -1;
    }
    else
        return st.s[st.top];

}


int main()
{
    struct Stack st;
    create(&st);

    struct Stack st1;
    create(&st1);
    

    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);

    peek(st,3);

    printf("\n%d\n",stackTop(st));

    Display(st);

    isEmpty(st1);

    push(&st,25);

    isFull(st);
    
    return 0;
}