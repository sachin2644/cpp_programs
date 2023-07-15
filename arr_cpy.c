#include<stdio.h>
#define MAX 50
int main()
{
    int arr[MAX],size;
    int cpy[MAX];
    printf("Enter size :");
    scanf("%d",&size);
    printf("Enter array elements :");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        cpy[i]=arr[i];
    }
    printf("After copying array elements :");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",cpy[i]);
    }
}