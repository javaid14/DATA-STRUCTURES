#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int x,i,r;
    printf("Enter the number for which table is to be generated : \n");
    scanf("%d", &x);


    for ( i = 1; i <= 10; i++)
    {
        r = x * i;
        printf("%d * %d = %d \n", x,i,r);
    }
    
    return 0;
}