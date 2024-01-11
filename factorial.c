#include<conio.h>
#include <stdio.h>
void main()
{
    int f=1,i,n;
    printf("Find factorial of ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("factorial of %d is : %d\n",n,f);
    getch();
}