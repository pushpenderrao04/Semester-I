#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,n,temp;
    printf("Enter no of Elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elments:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}