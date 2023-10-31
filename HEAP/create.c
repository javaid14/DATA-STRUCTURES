#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

//Create Heap
void Insert(int A[],int i)
{
    int temp;
    temp = A[i];
    while (i>1 && temp > A[i/2])
    {
        A[i] = A[i/2];
        i = i/2;  
    }
    A[i] = temp;
}

void CreateHeap(int A[])
{
    int i;
    for ( i = 2; i <= 7; i++)
    {
        Insert(A,i);
    }
    
}
void swap(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}


void Delete(int A[],int n)
{
    int x,i,j;
    x = A[n];
    A[i] = A[n];
    i=1;j=2*i;
    while (j<n-1)
    {
        if (A[i] < A[j])
        {
            swap (A[i],A[j]);
            i = j;
            j = 2*j;

        }
        else
           break;
    }
    A[n] = x;
}

int main()
{
    int A[] ={0,10,20,30,25,5,40,35};
    CreateHeap(A);
    Delete(A,8);
    for(int i=1;i<=7;i++)
    {
        printf("%d ",A[i]);
        printf("\n");
    }
    return 0;
}