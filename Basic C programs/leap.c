#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
    int yr;
    printf("Enter the year");
    scanf("%d",&yr);

    if (yr%400 == 0)
    {
        printf("Year %d is a leap year",yr);
    }
    else if (yr%100 == 0)
    {
        printf("Year %d is a leap year",yr);
    }
    else if(yr%4 == 0)
    {
        printf("Year %d is a leap year",yr);
    }
    else
        printf("Year %d is not a leap year",yr);
    return 0;
}