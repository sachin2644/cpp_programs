#include<stdio.h>
struct swap
{
    int num1;
    int num2;
};
int main()
{
    struct swap s;
    printf("Enter two number to swap :");
    scanf("%d%d",&s.num1,&s.num2);
    printf("Before swapping\nnum1=%d\nnum2=%d\n",s.num1,s.num2);
    s.num1=s.num1+s.num2;
    s.num2=s.num1-s.num2;
    s.num1=s.num1-s.num2;
    printf("After swapping\nnum1=%d\nnum2=%d\n",s.num1,s.num2);
    printf("size = %zu bytes\n",sizeof(s));
}