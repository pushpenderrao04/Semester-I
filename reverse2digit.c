#include<stdio.h>
#include<conio.h>
void main()
{
    int n, d1, d2, rev;
    printf("enter the value of n:");
    scanf("%d",&n);
    d1=n/10;
    d2=n%10;
    rev=d2*10+d1;
    printf("The reverse of n:%d",rev);
    getch();
}