#include<stdio.h>
#include<conio.h>
void main()
{
    int fact(int x);
    int a,factorial;
    printf("Enter no.");
    scanf("%d",&a);
    factorial=fact(a);
    printf("factorial is:%d",factorial);
    getch();
}
int fact(int x)
{
    int f=1,i;
    for(i=x;i>=1;i--)
    f=f*i;
    return f;
}