#include<stdio.h>
#include<stdlib.h>
void remove_space(char *str);
void remove_element(char *str,char element);
void remove_repeated(char *str);
#define MAX 50
int main()
{
    char str[MAX];
    printf("Enter string :");
    fgets(str,sizeof(str),stdin);
    remove_space(str);
    printf("sucessfully removed space from string = %s\n",str);
    remove_element(str,'a');
    printf("sucessfully removed element from string = %s\n",str);
    remove_repeated(str);
    printf("sucessfully removed repeated element from string = %s",str);
}
void remove_space(char *str)
{
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            j--;
        }
    }
}
void remove_element(char *str,char element)
{
    int i,j,flag=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==element)
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("given element in not found \n");
        exit(0);
    }
}
void remove_repeated(char *str)
{
    int i,j,k;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
                k--;
            }
        }
    }
}