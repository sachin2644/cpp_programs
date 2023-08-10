#include<stdio.h>
void str_cpy(char *dest,char *src);
#define MAX 50
int main()
{
    char src[MAX],dest[MAX];
    void (*ptr)(char *,char *);
    ptr=str_cpy;
    printf("Enter source :");
    fgets(src,MAX,stdin);
    printf("Enter destination :");
    fgets(dest,MAX,stdin);
    printf("dest=%s\n",dest);
    ptr(dest,src);
    printf("dest=%s\n",dest);
}
void str_cpy(char *dest,char *src)
{
    while(*src!='\0'&&*dest!='\0')
    {
        *dest++=*src++;
    }
}