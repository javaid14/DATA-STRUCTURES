#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i;

    printf("Enter the value of n:");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf(" %d",i);
    }
    
    return 0;
}