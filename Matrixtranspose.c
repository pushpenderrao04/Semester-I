#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,c,d,A[10][10],B[10][10],C[10][10];

    printf("Enter the  no of rows of columns of matrix: \n");
    scanf("%d %d",&m,&n);

    printf("Enter the elements of first matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++){
            scanf("%d",&A[c][d]);
        }
    }

    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++)
        {
            B[d][c]=A[c][d];
        }
    }

    printf("Transpose of matrix:\n");
    for(c=0;c<n;c++)
    {
        for(d=0;d<m;d++)
        {
            printf("%d \t",B[c][d]);
        }
        printf("\n");
    }
    
    getch();
}