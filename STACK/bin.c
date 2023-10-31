#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//Bin/Bucket Sort


struct Node
{
    int data;
    struct Node *next;

}*first = NULL;

int findMax(int A[],int n)
{
    int max=-1;
    int i;
    for(i=0;i<n;i++)
    {
        if(A[i]>max)
            max=A[i];
    }
    return max;
}
void Insert(struct Node** bin, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *bin;
    *bin = newNode;
}
void binSOrt(int A[],int n)
{
    int max,i,j;
    struct Node**Bins;
    max = findMax(A,n);
    Bins = (struct Node**)malloc(sizeof(struct Node)*(max+1));

    for ( i = 0; i < max+1; i++)
    {
        Bins[i] = NULL;
    }
    for ( i = 0; i < n; i++)
    {
        Insert(&Bins[A[i]],A[i]);

    }
    int index = 0;
    for (int i = 0; i <= max; i++) {
        struct Node* current = Bins[i];
        while (current != NULL) {
            A[index++] = current->data;
            struct Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(Bins);
}

int main()
{
    int A[]={11,13,7,12,16,9,24,5,10,3};
    int n=10,i;

    binSOrt(A,n);

    for(i=0;i<10;i++)
        printf("%d ",A[i]);
    printf("\n");
    return 0;
}