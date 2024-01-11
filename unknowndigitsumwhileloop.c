#include<stdio.h>
#include<conio.h>
int main()
{
    int n,org,remain,sum=0;
    printf("Enter an integer:");
    scanf("%d",&n);
    org=n;
    while (n!=0)
    {
        remain=n%10;
        sum+=remain;
        n/=10;
    }
    printf("Sum of digits of %d = %d\n",org,sum);
    return 0;
}