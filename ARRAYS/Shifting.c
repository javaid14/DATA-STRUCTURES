#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<unistd.h>

struct Array
{
    char A[10];
    int size;
    int length;

};
void leftShift(struct Array *arr, int shiftAmount)
 {
    int len = strlen(arr->A);
    shiftAmount %= len;
    char temp[len];

    for (int i = 0; i < len; i++) {
        temp[i] = arr->A[(i + shiftAmount) % len];
    }

    memcpy(arr->A, temp, len);
}

void leftRotate(struct Array *arr, int rotateAmount, int rotations)
{
    int len = arr->length;

    for (int i = 0; i < rotations; i++) 
    {
        leftShift(arr, rotateAmount);
        printf("%s", arr->A);
        sleep(1);  
    }
}
int main()
{
    struct Array arr1 = {{'W','E','L','C','O','M','E'},10,7};
    int rotateAmount = 1;
    int rotations = 20;

    printf("Original array: %s\n", arr1.A);

    leftShift(&arr1, rotateAmount);
    printf("After left shift: %s\n", arr1.A);

    leftRotate(&arr1, rotateAmount, rotations);
    return 0;
}