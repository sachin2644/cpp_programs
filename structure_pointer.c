#include<stdio.h>
#include<string.h>
struct student 
{
    int id;
    char name[15];
    float marks;
};
int main()
{
    struct student std;
    struct student *ptr;
    ptr=&std;
    // ptr->id=10;
    // strcpy(ptr->name,"sachin");
    // ptr->marks=1.22;
    // printf("id is %d\n",ptr->id);
    // printf("name is %s\n",ptr->name);
    // printf("marks is %.2f\n",ptr->marks);
    printf("Enter student id,name and marks :");
    scanf("%d%s%f",&ptr->id,ptr->name,&ptr->marks);
    printf("id=%d\nname=%s\nmarks=%.2f\n",ptr->id,ptr->name,ptr->marks);
}