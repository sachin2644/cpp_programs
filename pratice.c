#include<stdio.h>
#define MAX 50
void convert_str(char str[]);
int main()
{
    char str[MAX];
    void (*f_ptr)(char *str)=&convert_str;
    printf("Enter Upper_case string :");
    fgets(str,MAX,stdin);
    (*f_ptr)(str);
    printf("%s",str);
}
void convert_str(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65&&str[i]<=91)
        {
            str[i]+=32;
        }
    }
}
