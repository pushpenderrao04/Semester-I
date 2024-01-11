#include <stdio.h>
#include<conio.h>
int findValue(int array[][100],int rows,int cols,int target);
int main()
{
    int i,j,rows,cols,target;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    printf("Enter the number of columns: ");
    scanf("%d",&cols);
    int array[rows][cols];
    printf("Enter the elements of the array:\n");
    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            printf("Element [%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("Enter the value to find:");
    scanf("%d",&target);
    if (findValue(array,rows,cols,target))
    {
        printf("Value %d found in the array.\n",target);
    }
    else
    {
        printf("Value %d not found in the array.\n",target);
    }
    return 0;
}
int findValue(int array[][100],int rows,int cols,int target)
{
    int i,j;
    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            if (array[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
}