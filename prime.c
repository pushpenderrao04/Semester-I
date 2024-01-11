#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,count=0;
    printf("Enter the no ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) 
    {
        if(n%i==0)count+=1;
    }
    if(count>2) 
        printf("%d is not prime",n);
    else
        printf("%d is prime",n);
    getch();
}