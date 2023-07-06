#include<stdio.h>
void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void sort_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int j=i+1;
        while(j<size)
        {
            if(arr[i]>arr[j])
            {
                 arr[i]=arr[i]+arr[j];
                 arr[j]=arr[i]-arr[j];
                 arr[i]=arr[i]-arr[j];
            }
            j++;
        }
    }
}
int main()
{
    int arr[]={1,2,3,6,4,9,78,10};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    sort_array(arr,size);
    print_arr(arr,size);
}