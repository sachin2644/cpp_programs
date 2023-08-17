#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 50
int main()
{
    char *str;
    char ch;
    int i,j;
    str=(char *)malloc(size*sizeof(char));
    if(str==NULL)
    {
        printf("Memory is not allocated \n");
    }
    else
    {
        printf("Memory is successfully allocated using malloc\n");
    }
    printf("Enter string :");
    //scanf("%[^\n]",str);
    fgets(str,size,stdin);
    printf("Enter character to remove :");
    scanf("%c",&ch);
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            for(int j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
            j--;
        }
    }
    printf("%s",str);
    free(str);
    str=NULL;
}