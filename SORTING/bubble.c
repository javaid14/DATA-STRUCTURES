#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//Bubble Sort
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int A[],int n)
{
    int flag = 0,i,j;
    for (i = 0; i < n-1; i++)
    {
        flag = 0;
        for (j = 0; i < n-1-i; j++)
        {
            if (A[j] > A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        } 
    }
}

int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n=10;
    int i;
    bubbleSort(A,n);

    printf("\nBubble Sort is :\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");
    return 0;
}