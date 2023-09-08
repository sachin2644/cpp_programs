#include<stdio.h>
void remove_space(char *str);
typedef char X;
#define MAX 50
int main()
{
    X str[MAX];
    void (*f_ptr)(char *str);
    f_ptr=&remove_space;
    printf("Enter string :");
    fgets(str,sizeof(str),stdin);
    (*f_ptr)(str);
    printf("%s",str);
}
void remove_space(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            int j=i;
            while(str[j]!='\0')
            {
                str[j]=str[j+1];
                j++;
            }
            j--;
        }
    }
}