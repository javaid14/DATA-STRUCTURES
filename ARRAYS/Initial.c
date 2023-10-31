#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int i;
    int A[5] = {2,4,6,8,10};
    printf("%d \n",A[3]);
    printf("%d \n",3[A]);
    printf("%d \n",*(A + 3));

    for ( i = 0; i < 5; i++)
    {
        printf("%d \n", A[i]);
    }
    A[3] = 15;
    printf("%d \n",A[3]);
    return 0;
}