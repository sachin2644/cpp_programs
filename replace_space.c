#include<stdio.h>
#include<string.h>
#define MAX 50
void replace_space(char str[],char ch);
int main()
{
    char str[MAX],ch;
    printf("Enter string :");
    fgets(str,MAX,stdin);
    printf("Enter character to repalce space :");
    scanf("%c",&ch);
    replace_space(str,ch);
    printf("%s",str);
}
void replace_space(char str[],char ch)
{
    int len;
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            str[i]=ch;
        }
    }
}