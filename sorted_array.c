#include<stdio.h>
int main()
{
    int arr[]={1,-2,5,7,-9,9,10};
    int i,j;
    int size=sizeof(arr)/sizeof(int);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
        for(int k=0;k<size;k++)
        {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    // printf("Sorted array elements given below \n");
    // for(i=0;i<size;i++)
    // {
    //     printf("%d ",arr[i]);
    // }
}