#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int x = 0;
int fun(int n)
{
    if(n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }
    return 0;
}
int main()
{
    int a = 5;
    printf("%d",fun(a));
    return 0;
}