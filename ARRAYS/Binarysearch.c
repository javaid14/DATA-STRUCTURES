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

void Display(struct Array arr)
{
    int i;
    printf("\n Elements are :\n");
    for ( i = 0; i < arr.length; i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }

int BinarySearch(struct Array arr,int key)
{
    int l,mid,h;
    l = 0;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l+h)/2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        } 
        else
           l = mid + 1;
    }
    return -1;
}

int RBinarySearch(struct Array arr,int l,int h,int key)
{
    int mid;
    if (l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
        {
            return mid;
        }
        else if(key < arr.A[mid])
        {
            return RBinarySearch(arr,l,mid-1,key);
        }
        else
        {
            return RBinarySearch(arr,mid+1,h,key);
        }
    }
    return -1;
}

int main()
{
    
    struct Array arr1 = {{2,3,9,16,18,21,28,32,35},10,9};
    int l = 0;
    int h = arr1.length - 1;

    printf("\nAt index :%d Element is :%d",RBinarySearch(arr1,l,h,16),16);
    Display(arr1);
    printf("\nAt index :%d Element is :%d",BinarySearch(arr1,16),16);
    return 0;
}