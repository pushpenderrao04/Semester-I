#include<stdio.h>
void main()
{
    int A(int m, int n);
    int m,n;
    printf("Enter the two numbers:");
    scanf("%d%d",&m,&n);
    printf("\nOutput::%d\n",A(m,n));
}
int A(int m, int n)
{
    if (m==0)
        return n+1;
    else if (n==0)
        return A(m-1,1);
    else
        return A(m-1,A(m,n-1));
}