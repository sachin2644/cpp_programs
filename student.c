#include<stdio.h>
struct student
{
    int roll_num;
    char name[21];
    char address[20];
    float marks;
};
int main()
{
    struct student std;
    printf("size = %zu bytes\n",sizeof(std));
    printf("Enter student roll_num, name, address, marks :");
    scanf("%d%s%s%f",&std.roll_num,std.name,std.address,&std.marks);
    printf("roll_num=%d\nname=%s\naddress=%s\nmarks=%.1f\n",std.roll_num,std.name,std.address,std.marks);
}