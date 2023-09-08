#include<stdio.h>
#define MAX 50
int main()
{
    int arr[]={1,2,3,-8,7,-2,-1,14,25,20};
    int pos[MAX],neg[MAX];
    int size,i,j=0,k=0;
    size=sizeof(arr)/sizeof(int);
    for(i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            if(arr[i]%2==0)
            {
                 pos[j]=arr[i];
                 j++;
            }
          
        }
        else if(arr[i]<0)
        {
            if(arr[i]%2==0)
            {
                neg[k]=arr[i];
                k++;
            }
        }
    }
    printf("Positive array elements :");
    for(i=0;i<j;i++)
    {
        printf("%d ",pos[i]);
    }
    printf("\n");
    printf("Negative array elements :");
    for(i=0;i<k;i++)
    {
        printf("%d ",neg[i]);
    }
}