
//taylor series 
#include<stdio.h>

//SIMPLE RECURSION
double e(int x, int n)
{
    static double p =1 , f = 1;
    double r;
    if(n == 0)
    return 1;
    else
    {
        r = e(x, n-1);
        p = p*x;
        f = f*n;
        return r + p/f;
    }
}

//HORNERS RULE
double horner(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + x * s/n;
        return horner(x, n-1);
    }  
}

//ITERATIVLY USING LOOP
double iterate(int x, int n)
{
    double s = 1;
    for (; n>0; n--)
    {
        s = 1 + x *s/n;
    }
    return s;
    
}
int main()
{
    double value = e(1,10);
    double value1 = horner(1,10);
    double value2 = iterate(1,10);
    printf("%lf \n", value);
    printf("%lf \n", value1);
    printf("%lf \n", value2);
    return 0;
}