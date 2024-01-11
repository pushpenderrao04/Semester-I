#include <stdio.h>
#include <conio.h>
int Partition(int A[],int lb,int ub)
{
    int pivot=A[lb];
    int start=lb;
    int end=ub;
    while(start<end)
    while(A[start]<=pivot)
    {
        start++;
    }
    while(A[end]>pivot)
    {
        end--;
    }
    if(start<end)
    {
        int temp=A[start];
            A[start]=A[end];
            A[end]=temp;
    }
        int temp=A[lb];
        A[lb]=A[end];
        A[end]=temp;
    return end;
}
void QuickSort(int A[],int lb,int ub)
{
    if(lb<ub)
    {
        int loc=Partition(A,lb,ub);
        QuickSort(A,lb,loc-1);
        QuickSort(A,loc+1,ub);
    }
}
int main()
{
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    QuickSort(A,0,n-1);
    printf("Sorted array:\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}