#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number to generate its table:");
    scanf("%d",&n);
    printf("Table of %d:\n",n);
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    return 0;
}