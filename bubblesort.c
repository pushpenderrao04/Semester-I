#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],n,c,d,swap;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(c=0;c<n;c++)
    {
        scanf("%d",&a[c]);
    }
    for(c=0;c<n-1;c++)
    {
        for(d=0;d<n-c-1;d++)
        {
            if(a[d]>a[d+1])
            {
                swap=a[d];
                a[d]=a[d+1];
                a[d+1]=swap;
            }
        }
    }
    printf("Sorted array:");
    for(c=0;c<n;c++)
        printf("%d\n",a[c]);
    return 0;
}