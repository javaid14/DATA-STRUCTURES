#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int A[5] = {2,4,6,8,10};
    int *p;
    int i;


    p = (int *)malloc(5*sizeof(int));
    p[0] = 1;
    p[1] = 3;
    p[2] = 5;
    p[3] = 7;
    p[4] = 9;

    for ( i = 0; i < 5; i++)
    {
        printf("%d ,",A[i]);
    
    }

    printf("\n");

    for ( i = 0; i < 5; i++)
    {
        printf("%d ,",p[i]);
    }

    printf("\n");

    free(p);

    printf("%d \n",p[2]);
    
    return 0;
}