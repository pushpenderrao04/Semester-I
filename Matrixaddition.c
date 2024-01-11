/*Matrix addition*/
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
    printf("Enter the elements of second matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++){
            scanf("%d",&B[c][d]);
        }
    }
    printf("Sum of matrix:\n");
    for(c=0;c<m;c++)
    {
        for(d=0;d<n;d++){
            C[c][d]=A[c][d]+B[c][d];
            printf("%d\t",C[c][d]);
        }
        printf("\n");
    }
    getch();
}