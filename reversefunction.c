#include<stdio.h>
#include<conio.h>
void main()
{
    int rev(int r);
    int n,reverse;
    printf("Enter no:");
    scanf("%d",&n);
    reverse=rev(n);
    printf("Reverse is:%d",reverse);
    getch();
}
int rev(int n)
{
    int r,d1,d2;
    d1=n/10;
    d2=n%10;
    r=d2*10+d1;
    return r;
}