#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);

    if (num >= 0)
    {
        printf("%d is positive", num);
    }
    else
    printf("%d is negative",num);
    
    return 0;
}