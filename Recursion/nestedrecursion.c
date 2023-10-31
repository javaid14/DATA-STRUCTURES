#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        return fun(fun(n + 11));
    }
    
}
int main()
{
    int r = 95;
    printf("%d",fun(r));
    return 0;
}