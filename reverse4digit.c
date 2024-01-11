#include<stdio.h>
#include<conio.h>
void main()
{
    int n, d1, d2, d3, d4, rev;
    printf("enter the value of n:");
    scanf("%d",&n);
    d1=n/1000;
    n=n%1000;
    d2=n/100;
    n=n%100;
    d3=n/10;
    d4=n%10;
    rev=d4*1000+d3*100+d2*10+d1;
    printf("The reverse of n:%d",rev);
    getch();
}