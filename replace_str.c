#include<stdio.h>
#include<string.h>
#define MAX 50
void replace_(char str[],char ch,int len);
int main()
{
    char str[MAX],ch;
    int len;
    printf("Enter string :");
    fgets(str,sizeof(str),stdin);
    printf("Enter character to replace a space :");
    scanf("%c",&ch);
    len=strlen(str);
    replace_(str,ch,len);
    printf("After replaceing space with character \n");
    printf("%s",str);
}
void replace_(char str[],char ch,int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            str[i]=ch;
        }
    }
}