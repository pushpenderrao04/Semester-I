#include<stdio.h>
#include<conio.h>
void main()
{
    int  rollno;
    char name[50],subject[25],branch[50];
    printf("Name:");
    scanf("%s",&name);
    printf("Roll No:");
    scanf("%d",&rollno);
    printf("Subject:");
    scanf("%s",&subject);
    printf("Branch:");
    scanf("%s",&branch);
    printf("Name:%s\n",name);
    printf("Roll No:%d\n",rollno);
    printf("Subject:%s\n",subject);
    printf("Branch:%s\n",branch);
    printf("\nSignature");
    getch();
}