#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,sumofSq=0;
    printf("Enter a positive integer n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sumofSq+=i*i;
    }
    printf("The sum of squares of the first %d natural numbers is: %d\n", n, sumofSq);
    getch();
}