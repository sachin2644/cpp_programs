#include<stdio.h>
int main()
{
    int a=10;
    int *ptr;
    int **ptr1;
    ptr=&a;
    ptr1=&ptr;
    printf("*ptr=%d\n",*ptr);
    printf("**ptr=%d\n",**ptr1);
}
//double pointer : pointer store the address of another pointer
//pointer uesd to store the address of variable 
//second pointer used to store the address of first pointer
// is also called as pointer to pointer