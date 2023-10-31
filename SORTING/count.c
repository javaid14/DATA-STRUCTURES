#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//count sort
int findMax(int A[],int n)
{
    int max=-1;
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
void countSort(int A[],int n)
{
    int i,j,max;
    int *c;
    max = findMax(A,n);
    c = (int *)malloc(sizeof(int)*max+1);
    for ( i = 0; i < max+1; i++)
    {
        c[i] = 0;
    }
    for ( i = 0; i < n; i++)
    {
        c[A[i]]++;
    }
    i=j=0;
    while (i<max+1)
    {
        if (c[i] > 0)
        {
            A[j++] = i;
            c[i]--;
        }
        else{
            i++;

        }
    } 
}


int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n=10,i;

    countSort(A,n);

    for(i=0;i<10;i++)
        printf("%d ",A[i]);
    printf("\n");
    return 0;
}