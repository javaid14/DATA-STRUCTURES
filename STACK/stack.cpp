#include<iostream>
using namespace std;

class stack
{
private:
    int size;
    int top;
    int *s;
public:

    void create();
    void Display();
    void push(int x);
    int pop();
    int peek(int index);
    int stacktop();
    int isEmpty();
    int isFull();
    
};


//CReate stack 
void stack::create()
{
  cout<<"Enter the size of stack :\n";
  cin>>size;
  top = -1;
  s = new int[size];  
}

//Display
void stack::Display()
{
    int i;
    for(i=top;i>=0;i--)
    {
      cout<<s[i]<<" "; 
    }
    cout<<"\n"; 
 
}

//st.push
void stack::push(int x)
{
    if (top == size-1)
    {
        cout<<"\nSTACK OVERFLOW\n";
    }
    else
    {
        top++;
        s[top] = x;
    }
}

//POP
int stack::pop()
{
    int x = -1;
    if (top == -1)
    {
        cout<<"\nSTACK UNDERFLOW\n";
    }
    else
    {
        x = s[top];
        top--;
    } 
    return x;
}

//PEEK
int stack::peek(int pos)
{
    int x = -1;
    if (top - pos + 1 < 0)
    {
        cout<<"\nINVALID POSITION\n";
    }
    else
    {
        x = s[top-pos+1];
        cout<<x<<"\n";
    }
    
}

//IS EMPTY

int stack::isEmpty()
{
    if (top == -1)
    {
        cout<<"\nSTACK IS EMPTY\n";
    }
    else
        cout<<"\nSTACK IS NOT EMPTY\n";

}

//ISFULL

int stack::isFull()
{
    if (top == size-1)
    {
        cout<<"\nSTACK IS FULL\n";
    }
    else
        cout<<"\nSTACK IS NOT FULL\n";

}

//STACKTOP
int stack::stacktop()
{
    if (top == -1)
    {
        return -1;
    }
    else
        return s[top];

}

int main()
{
    stack (st);
    st.create();

    stack (st1);
    st1.create();
    

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.peek(3);

    cout<<st.stacktop()<<"";

    st.Display();

    st1.isEmpty();

    st.push(25);

    st.isFull();

    return 0;
}