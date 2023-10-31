#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int A[5] = {2,4,6,8,10};

    int *p;
    int *q;
    int i;

    p = (int *)malloc(5*sizeof(int));

    p[0] = 2;
    p[1] = 4;
    p[2] = 6;
    p[3] = 8;
    p[4] = 10;

    q = (int *)malloc(10*sizeof(int));

    for ( i = 0; i < 5; i++)
    {
        q[i] =p[i];
    }

    free (p);

    p = q;
    q = NULL;

    p[8] = 20;
    p[6] = 15;

    printf("%d \n",p[8]);
    printf("%d \n",p[6]);
    
    return 0;
}