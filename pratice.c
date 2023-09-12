#include<stdio.h>
#include<string.h>
void string_concatenate(char src[],char dest[]);
void reverse_string(char src[]);
void replace_char(char *src,char element);
void remove_space(char src[]);
void repeated_char(char src[]);
void convert_string(char src[]);
void remove_ch(char src[]);
void space_(char src[]);
void sort_str(char src[]);
void to_check_ch(char *src,char data);
int main()
{
    char src[]="Hello";
    char dest[]=" Word";
    string_concatenate(src,dest);
    printf("string concatenation = %s\n",src);
    reverse_string(src);
    printf("string reverse = %s\n",src);
    replace_char(src,'W');
    printf("resultant string = %s\n",src);
    remove_space(src);
    printf("string = %s\n",src);
    repeated_char(src);
    printf("string = %s\n",src);
    convert_string(src);
    printf("Upper case = %s\n",src);
    remove_ch(src);
    printf("resultant = %s\n",src);
    space_(src);
    sort_str(src);
    printf("%s\n",src);
    to_check_ch(src,'r');
}
void string_concatenate(char src[],char dest[])
{
    // while(*src!='\0')
    // {
    //     *src++;
    // }
    // while(*dest!='\0')
    // {
    //     *src++=*dest++;
    // }
    // *src='\0';
    int i=0,j=0;
    while(src[i]!='\0')
    {
        src[i];
        i++;
    }
    while(dest[j]!='\0')
    {
        src[i]=dest[j];
        i++;
        j++;
    }
    src[i]='\0';
}
void reverse_string(char *src)
{
    int i=0,j=0;
    j=strlen(src)-1;
    while(i<j)
    {
        int temp=src[i];
        src[i]=src[j];
        src[j]=temp;
        i++;
        j--;
    }
}
void replace_char(char *src,char element)
{
    int i;
    for(i=0;src[i]!='\0';i++)
    {
        if(src[i]==element)
        {
            src[i]='P';
        }
    }
}
void remove_space(char src[])
{
    int i,j;
    for(i=0;src[i]!='\0';i++)
    {
        if(src[i]==' ')
        {
            for(j=i;src[j]!='\0';j++)
            {
                src[j]=src[j+1];
            }
            j--;
        }
    }
}
void repeated_char(char src[])
{
    int k;
    for(int i=0;src[i]!='\0';i++)
    {
        for(int j=i+1;src[j]!='\0';j++)
        {
            if(src[i]==src[j])
            {
                for(int k=j;src[k]!='\0';k++)
                {
                    src[k]=src[k+1];
                }
                k--;
            }
        }
    }
}
void convert_string(char src[])
{
    for(int i=0;src[i]!='\0';i++)
    {
        if(src[i]>=97&&src[i]<=122)
        {
            src[i]-=32;
        }
    }
}
void remove_ch(char src[])
{
    int j;
    for(int i=0;src[i]!='\0';i++)
    {
        if(src[i]=='L'||src[i]=='E'||src[i]=='H')
        {
            for(int j=i;src[j]!='\0';j++)
            {
                src[j]=src[j+3];
            }
        }
    }
}
void space_(char src[])
{
    for(int i=0;src[i]!='\0';i++)
    {
        printf("%c ",src[i]);
    }
    printf("\n");
}
void sort_str(char src[])
{
    for(int i=0;src[i]!='\0';i++)
    {
        for(int j=i+1;src[j]!='\0';j++)
        {
            if(src[i]>src[j])
            {
                int temp=src[i];
                src[i]=src[j];
                src[j]=temp;
            }
        }
    }
}
void to_check_ch(char *src,char data)
{
    int i=0,flag=0;
    while(src[i]!='\0')
    {
        if(src[i]==data)
        {
            printf("%c is present in given string\n",data);
            flag=1;
        }
        i++;
    }
    if(flag==0)
    {
        printf("%c is not in given string\n",data);
    }
}