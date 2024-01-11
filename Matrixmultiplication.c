#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,c,d,p,q,k,sum=0,A[10][10],B[10][10],C[10][10];
    printf("Enter the  no of rows of columns of matrix: \n");
    scanf("%d %d",&m,&n);
    printf("Enter the elements of first matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            scanf("%d",&A[c][d]);
        }
    }
    printf("Enter no of rows and columns of second  matrix:\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
        printf("can't multiply");
    else
    {
        printf("Enter the elements of second matrix:\n");
        for(c=0;c<p;c++)
        {
            for(d=0;d<q;d++)
            {
                scanf("%d",&B[c][d]);
            }
        }
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
            {
                for(k=0;k<p;k++)
                {
                    sum=sum+A[c][k]*B[k][d];
                }
                C[c][d]=sum;
                sum=0;
            }
        }
        printf("Product of the matrix\n");
        for(c=0;c<m;c++)
        {
            for(d=0;d<q;d++)
            {
                printf("%d\t",C[c][d]);
            }
            printf("\n");
        }
    }
    return 0;
}