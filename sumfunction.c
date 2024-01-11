#include<stdio.h>
#include<conio.h>
void main()
{
    int sum(int a,int b);
    int a,b,c;
    printf("Enter a and b=");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d",c);
    getch();
}
int sum(int a, int b)
{
    int x;
    x=a+b;
    return x;
}