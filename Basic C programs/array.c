#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int A[100];
    int i;
    printf("Enter the elements of array: ");
   {
    for ( i = 0; i < 5; i++)
    {
        scanf("%1d\n", &A[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", A[i]);
    }
   }
    return 0;
}