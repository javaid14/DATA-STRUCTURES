#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("given %d is even", num);
    }
    else
    printf("%d is odd", num);
    
    return 0;
}