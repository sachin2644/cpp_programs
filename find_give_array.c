#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[]={1,-2,5,7,-9,9,10};
    int data;
    printf("Enter data :");
    scanf("%d",&data);
    int i,j,size,flag=0;
    size=sizeof(arr)/sizeof(int);
    for(i=0;i<size;i++)
    {
        if(arr[i]==data)
        {
            for(j=i;j<size;j++)
            {
                arr[j]=
arr[j+1];
                flag=1;
            }
            size--;
        }
    }
    if(flag==0)
    {
        printf("%d is not found in an array elements\n",data);
        exit(0);
    }
    printf("resultant array element \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}