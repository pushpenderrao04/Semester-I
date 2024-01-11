#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,f=1;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    i=n;
    while (n>1)
    {
        f*=n;
        n--;
    }
    printf("Factorial of %d = %d\n",i,f);
    return 0;
}