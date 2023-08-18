//changes made to formal parametr will affect on actual parametr
#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("after swapping\na=%d\nb=%d\n",a,b);
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
