#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if (n% 2 == 0)
    printf("no. is even");
    else
    printf("no. is odd");
    getch();
}