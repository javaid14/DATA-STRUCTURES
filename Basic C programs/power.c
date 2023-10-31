#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int x, power;

    printf("Enter the number to which the power is to be calculated : ");
    scanf("%d", &x);

    power = x * x;

    printf(" The power is : %d", power); 

    return 0;
}