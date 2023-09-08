
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 50
void remove_vowel(char str[],int len);
void remove_(char str[],int len);
void remove_char(char str[],int len,char ch);
int main()
{
    char str[MAX];
    char ch;
    printf("Enter string :");
    fgets(str,sizeof(str),stdin);
    printf("Enter character to remove from string :");
    scanf("%c",&ch);
    int len;
    len=strlen(str);
    remove_vowel(str,len);
    remove_(str,len);
    remove_char(str,len,ch);
    printf("%s",str);
}
void remove_vowel(char str[],int len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
                str[j]='-';
                break;
            }
            len--;
            j--;
        }
    }
}
void remove_(char str[],int len)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        if(str[i]=='-')
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
}
void remove_char(char str[],int len,char ch)
{
    int i,j;
    for(i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
}