#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
int main()
{
//Direct in stack
 int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
 
 //array of pointers
 int *B[3];

 B[0]=(int *)malloc(4*sizeof(int));

 B[1]=(int *)malloc(4*sizeof(int));

 B[2]=(int *)malloc(4*sizeof(int));
 
 for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) {
            B[i][j] = A[i][j];
        }
    }
        
//Double pointer
 int **C;
 
 C=(int **)malloc(3*sizeof(int *));
 C[0]=(int *)malloc(4*sizeof(int));
 C[1]=(int *)malloc(4*sizeof(int));
 C[2]=(int *)malloc(4*sizeof(int));

 for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 4; j++) {
            C[i][j] = A[i][j];
            
        }
    }
 

 int i,j;
 for(i=0;i<3;i++)
 {
    for(j=0;j<4;j++)
    {
       printf("%d ",A[i][j]);
    }
    printf("\n");
 }
 
 printf("----------------------\n");

 for(i=0;i<3;i++)
 {
    for(j=0;j<4;j++)
    {
       printf("%d ",B[i][j]);
    }
    printf("\n");
 }

 printf("----------------------\n");


 for(i=0;i<3;i++)
 {
    for(j=0;j<4;j++)
    {
       printf("%d ",C[i][j]);
    }
    printf("\n");
 }

 
    return 0;
}