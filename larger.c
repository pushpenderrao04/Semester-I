#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("Result:");
        printf("a is greater than b");
    }
    if (a<b)
    {
        printf("Result:");
        printf("b is greater than a");
    }
    if (a == b)
    {
        printf("Result:");
        printf("a and b are equal");
    }
    getch();
}