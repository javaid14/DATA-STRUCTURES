#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
struct Array
{
    int A[10];
    int size;
    int length;

};
//GET
int Get(struct Array arr ,int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
}
//SET (pointer to address)
void Set(struct Array *arr,int index)
{
    int x;
    printf("\nEnter the value to set \n");
    scanf("%d",&x);
    arr->A[index]= x;
}

//MAXIMUM
int max(struct Array arr)
{
    int max = arr.A[0];
    for ( int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }  
    }
    return max;
}
//MINIMUM
int min(struct Array arr)
{
    int min = arr.A[0];
    for ( int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }  
    }
    return min;
}
//SUM
int sum(struct Array arr)
{
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total = total + arr.A[i];
    }
    return total;
}
//Rsum
int Rsum(struct Array arr,int n)
{
    if (n<0)
    {
        return 0;
    }
    else
        return Rsum(arr,n-1) + arr.A[n];
}
//AVERAGE
int avg(struct Array arr,int n)
{
    int total = 0;
    for (int i = 0; i < arr.length; i++)
    {
        total = total + arr.A[i];
    }
    return total/n;
}
int main()
{
    struct Array arr1 = {{2,3,9,16,18,21,28,32,35},10,9};
    printf("\nElement at index %d is :%d\n",3,Get(arr1,3));
    printf("\nSum is: %d \n",sum(arr1));
    Set(&arr1,3);
    printf("\nElement at index %d is :%d\n",3,Get(arr1,3));
    printf("\nmaximum is %d ",max(arr1));
    printf("\nminimum is %d ",min(arr1));
    printf("\nSum is: %d \n",Rsum(arr1,arr1.length));
    printf("\nAverage is: %d \n",avg(arr1,arr1.length));
    return 0;
}