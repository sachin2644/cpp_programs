#include<stdio.h>
int add(int ,int ); //declaration of function
int main()
{
    int x,y;
    int (*ptr)(int ,int); //declaration of the function pointer
    int res;
    printf("Enter x and y value :");
    scanf("%d%d",&x,&y);
    ptr=add; //here pointer hold the address of the function
    res=(ptr)(x,y);
    printf("res=%d\n",res);
}
int add(int x,int y)
{
    return x+y;
}