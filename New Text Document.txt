#include<stdio.h>
void bubble_sort(int arr[],int size);
void linear_search(int arr[],int element,int size);
int main()
{
    int arr[]={1,3,2,-4,5,10,6,7};
    int size,i;
    size=sizeof(arr)/sizeof(int);
    printf("sorted array elements \n");
    bubble_sort(arr,size);
    linear_search(arr,10,size);
    // printf("sorted array elements \n");
    // for(i=0;i<size;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
}
void bubble_sort(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(int k=0;k<size;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
}
void linear_search(int arr[],int element,int size)
{
    int i,flag=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("%d is found at index[%d]\n",arr[i],i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("not found in an array element");
    }
}