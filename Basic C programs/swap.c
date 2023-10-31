#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int first,second,temp;
    printf("enter the first number\n ");
    scanf ("%d", &first);

    printf("enter the second number\n");
    scanf ("%d", &second);

    temp = first ;

    first = second ;

    second = temp ;

    printf("now first is %d",first);

    printf("\nnow second is %d",second);

    return 0;
}