#include<stdio.h>
#include<conio.h>
void main()
{
    int n, d1, d2, d3, sum;
    printf("Enter the value of n:");
    scanf("%d",&n);
    d1=n/100;
    n=n%100;
    d2=n/10;
    d3=n%10;
    sum=d1+d2+d3;
    printf("Sum of digits=%d",sum);
    getch();
}