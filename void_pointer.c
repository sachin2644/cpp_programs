#include<stdio.h>
int main()
{
    int num=10;
    char ch='A';
    float f=1.25;
    void *ptr;
    ptr=&num;
    printf("num=%d\n",*(int *)ptr);
    ptr=&ch;
    printf("ch=%c\n",*(char *)ptr);
    ptr=&f;
    printf("f=%.1f\n",*(float *)ptr);
    
}