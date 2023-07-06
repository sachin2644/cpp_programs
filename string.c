#include<stdio.h>
#define MAX 100
int main()
{
    char str[MAX];
    printf("Enter string :");
    scanf("%[^\n]",str);
    printf("%s",str);
}