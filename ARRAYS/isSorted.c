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
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Inserting an element
void insert(struct Array *arr)
{
    int i = arr->length - 1;
    int x;
    printf("\nEnter the value to be inserted\n");
    scanf("%d",&x);

    while (arr->A[i] > x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
}
//Check whether array is sorted
int isSorted(struct Array arr)
{
    for ( int i = 0; i < arr.length-1; i++)
    {
      if (arr.A[i] > arr.A[i+1])
      {
        return 0;
      } 
    }
    return 1;  
}
//Negative on left side
void Negative(struct Array *arr)
{
    int i = 0;
    int j = arr->length-1;
    while (i<j)
    {
        while (arr->A[i]<0)
        {
            i++;
        }
        while (arr->A[j]>= 0)
        {
            j--;
        }
        if (i<j)
        {
            swap(&arr->A[i],&arr->A[j]);
        } 
    }
    
}
int main()
{
    struct Array arr1={{2,3,9,16,18,21,28,32,35},10,9};
    struct Array arr2 = {{2,3,4,5,1,7,8,12},10,8};
    struct Array arr3 = {{2,3,-1,-3,5,-4,6,7,-8,9},10,10};
    Display(arr1);
    insert(&arr1);
    Display(arr1);
    Display(arr2);
    printf(" \n Array is :%d \n",isSorted(arr2));
    printf(" \nArray is :%d \n",isSorted(arr1));

    Display(arr3);
    Negative(&arr3);
    Display(arr3);
    return 0;
}