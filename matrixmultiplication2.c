#include<stdio.h>
#include<conio.h>
void inputMatrix(int matrix[][10],int rows,int cols);
void multiplyMatrices(int matrix1[][10],int matrix2[][10],int result[][10],int m,int n,int p,int q);
void displayMatrix(int matrix[][10],int rows,int cols);
int main()
{
    int m,n,p,q;
    printf("Enter the dimensions of the first matrix (m x n):");
    scanf("%d %d",&m,&n);
    printf("Enter the dimensions of the second matrix (p x q):");
    scanf("%d %d",&p,&q);
    int matrix1[m][10],matrix2[10][q],result[m][q];
    printf("Enter elements of the first matrix:\n");
    inputMatrix(matrix1,m,n);
    printf("Enter elements of the second matrix:\n");
    inputMatrix(matrix2,p,q);
    if (n==p)
    {
        multiplyMatrices(matrix1,matrix2,result,m,n,p,q);
        printf("Result of matrix multiplication:\n");
        displayMatrix(result,m,q);
    }
    else
    {
        printf("Both matrices are not compatible for multiplication.\n");
    }

    return 0;
}
void inputMatrix(int matrix[][10],int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void multiplyMatrices(int matrix1[][10],int matrix2[][10],int result[][10],int m,int n,int p,int q)
{
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<q;j++)
        {
            result[i][j]=0;
            for (int k=0;k<n;k++)
            {
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
void displayMatrix(int matrix[][10],int rows,int cols)
{
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}