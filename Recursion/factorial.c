#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int  fact ( int n)
{
    if (n == 0)
    {
        return 1;
    }
   else
   {
    return fact(n - 1) * n;
   }
    
}

int Ifact( int n)
{
    int i, fact=1;
    for ( i = 1; i <= n ; i++)
    {
        fact = fact * i;
    
    }
    return fact;
    
}
int main()
{
    int r;
    printf("Enter the no. for which factorial is to be calculated \n");
    scanf("%d", &r);

    printf("%d",Ifact(r));
    return 0;
}