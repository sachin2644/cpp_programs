#include<stdio.h>
#include<stdlib.h>
#define size 5
int main()
{
    int *ptr;
    ptr=(int *)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is not allocated \n");
    }
    else
    {
        printf("Memory is allocated using malloc\n");
    }
    for(int i=0;i<size;i++)
    {
        ptr[i]=i+1;
    }
    printf("Display the array elements \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}