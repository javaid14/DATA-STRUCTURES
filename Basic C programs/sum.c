#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,sum;
    printf("Enter the value of n");
    scanf("%d",&n);

    sum = (n * (n + 1))/2;
    printf("Sum is %d", sum);
    return 0;
}