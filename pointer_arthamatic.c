//pointer Arthamatic
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,-5,-9,5};
    int n;
    n=sizeof(arr)/sizeof(int);
    int *ptr;
    ptr=arr;
    printf("%d\n",*(++ptr));//this the preincrement of the value
    printf("%d\n",*(++ptr));//this is also preincrement of the value
    printf("%d\n",*(++ptr));
    printf("%d\n",*(ptr++));//this is preincrement of the address
    printf("%d\n",*(++ptr));
}