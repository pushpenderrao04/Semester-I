#include<stdio.h>
#include<conio.h>
void Merge (int A[],int lb,int mid,int ub)
{
    int i,j,k;
    int n1=mid-lb+1;
    int n2=ub-mid;
    int Left[n1],Right[n2];
    for (i=0;i<n1;i++)
        Left[i] = A[lb + i];
    for (j=0;j<n2;j++)
        Right[j] = A[mid + 1 + j];
    i=0,j=0,k=lb;
    while(i<n1 && j<n2)
    {
        if(Left[i]<=Right[j])
        {
            A[k]=Left[i];
            i++;
        }
        else
        {
            A[k]=Right[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        A[k]=Left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        A[k]=Right[j];
        j++;
        k++;
    }
}
void MergeSort(int A[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        MergeSort(A,lb,mid);
        MergeSort(A,mid+1,ub);
        Merge(A,lb,mid,ub);
    }
}
int main()
{
    int n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    MergeSort(A,0,n-1);
    printf("Sorted array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}