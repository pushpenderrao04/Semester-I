#include<stdio.h>
#include<conio.h>
void main()
{
    int n, d1, d2, sum;
    printf("Enter the value of n:",n);
    scanf("%d",&n);
    d1=n/10;
    d2=n%10;
    sum=d1+d2;
    printf("Sum of digits=%d",sum);
    getch();
}