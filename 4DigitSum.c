#include<stdio.h>
#include<conio.h>
void main()
{
    int n, d1, d2, d3, d4, sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    d1=n/1000;
    n=n%1000;
    d2=n/100;
    n=n%100;
    d3=n/10;
    d4=n%10;
    sum=d1+d2+d3+d4;
    printf("Sum of digits=%d",sum);
    getch();
}