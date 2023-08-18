//next number is the sum of previous two number is called fibonacci series
#include<stdio.h>
int main()
{
    int num,n1=0,n2=1,i,n3;
    printf("Enter number :");
    scanf("%d",&num);
    printf("%d\n%d\n",n1,n2);
    for(i=2;i<=num;i++)
    {
        n3=n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
}
