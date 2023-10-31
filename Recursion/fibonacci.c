#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int fib(int n)
{
    if(n <= 1)
    return n;
    else
    {
        return fib(n-2) + fib(n-1);
    }
}

int fibiterate(int n)
{
    int t0 = 0,t1 = 1,s,i;
    if(n <= 1)
    {
        return n;
    }
    for ( i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int F[100];
int Fib(int n)
{
    if(n <= 1)
    { 
        F[n] = n;
        return n;
    }
    else{
        if (F[n-2] == -1)
        F[n-2] = Fib(n-2);

        if(F[n-1] == -1)
        F[n-1] =Fib(n-1);
        F[n] = F[n-2] + F[n-1];

        return F[n-2] + F[n-1];
    }
}

int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        F[i]=-1;
    }
    
    int r1 = fib(5);
    int r2 = fibiterate(5);
    int r3 = Fib(5);

    printf("%d \n",r1);
    printf("%d \n",r2);
    printf("%d \n",r3);

    return 0;
}