#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int num1,num2,num3;
    printf("enter the ist no,");
    scanf("%d",&num1);

    printf("enter the 2nd no,");
    scanf("%d",&num2);
    
    printf("enter the 3rd no,");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is greatest",num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is greatest",num2);
    }
    
    else if (num3 > num2 && num3 > num1)
    {
        printf("%d is greatest",num3);
    }

    return 0;
}