#include<stdio.h>
#define MAX(a,b) (a>b)?a:b
int main()
{
    int a,b,max;
    printf("Enter x and y :");
    scanf("%d%d",&a,&b);
    max=MAX(a,b);
    printf("man=%d\n",max);
}