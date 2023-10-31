#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num , i , flag = 0;

    printf("Enter the positive integer : \n");
    scanf("%d", &num);

    if(num == 0 || num == 1)
     flag = 1;

    for ( i = 2; i <= num/2; ++i)
    {
        if( num % i == 0){
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf(" %d is not prime. \n", num);
    }
    else
    {
        printf("%d is prime number", num);
    }
    
    return 0;
}