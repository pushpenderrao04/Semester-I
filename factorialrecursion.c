#include<stdio.h>
#include<conio.h>
void main()
{
    int a,fact;
    int rec(int);
    printf("\nEnter any number:");
    scanf("%d",&a);
    fact=rec(a);
    printf("Factorial value:%d",fact);
    getch();
}
int rec(int x)
{
    int f;
    if (x==1)
      return(1);
    else
      f=x*rec(x-1);
    return(f);
}
