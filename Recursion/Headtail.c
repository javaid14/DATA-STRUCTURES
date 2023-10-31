#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//TAIL
void fun1(int n)
{
    if (n > 0)
    {
        printf("%d \n",n);
        fun1(n-1);
    }
}

//HEAD
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n-1);
        printf("%d \n",n);
        
    }
}

int main()
{
    int x = 3;
    fun1(x);
    printf("...................\n");
    fun2(x);
    return 0;
}