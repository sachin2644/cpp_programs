#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    ptr=(int *)calloc(size,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is unable to allocate\n");
    }
    else
    {
        printf("Memory successfully allocate using calloc\n");
    }
    printf("Enter array elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
}