#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int size,data,flag=0;
    printf("Enter size :");
    scanf("%d",&size);
    ptr=(int *)malloc(size*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory is unable to allocate\n");
    }
    else
    {
        printf("Memory successfully allocate using malloc\n");
    }
    printf("Enter array elements \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Enter data to find :");
    scanf("%d",&data);
    for(int i=0;i<size;i++)
    {
        if(ptr[i]==data)
        {
            printf("element found at index[%d]\n",i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("element is not found in an array element \n");
        exit(0);
    }
    free(ptr);
}