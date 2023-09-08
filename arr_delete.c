#include<stdio.h>
#include<stdlib.h>
void delete_element(int arr[],int element,int size);
// void print_arr(int arr[],int );
int main()
{
    int arr[]={1,2,5,8,4,-2,25};
    int size,temp;
    size=sizeof(arr)/sizeof(int);
    delete_element(arr,10,size);
    // print_arr(arr,size);
}
void delete_element(int arr[],int element,int size)
{
    int i,j,flag=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            for(j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
                flag=1;
            }
            size--;
            j--;
        }
    }
    if(flag==0)
    {
        printf("given element is not found\n");
        exit(0);
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}