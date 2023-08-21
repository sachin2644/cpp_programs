#include<stdio.h>
void remove_repeated(int arr[],int size);
int main()
{
    int arr[]={1,4,2,5,4,7,5};
    int size;
    size=sizeof(arr)/sizeof(int);
    remove_repeated(arr,size);
}
void remove_repeated(int arr[],int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<size;k++)
                {
                    arr[k]=arr[k+1];
                }
                size--;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
