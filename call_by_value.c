//changes made to actual parametr do not affect on actual paramter
#include<stdio.h>
void swap(int ,int );
int main()
{
    int a=10,b=20;
    swap(a,b);
    printf("after swapping\na=%d\nb=%d\n",a,b);
}
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}