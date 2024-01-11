#include<stdio.h>
#include<conio.h>
int reverse(int r);
void main()
{
    int n,rev;
    printf("Enter no:");
    scanf("%d",&n);
    rev=reverse(n);
    printf("Reverse is:%d",rev);
    getch();
}
int reverse(int n)
{
    int r,d1,d2;
    d1=n/10;
    d2=n%10;
    r=d2*10+d1;
    return r;
}