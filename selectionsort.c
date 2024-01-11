#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],n,c,d,pos,t;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (c = 0; c < n; c++)
    {
        scanf("%d", &a[c]);
    }
    for(c=0;c<n-1;c++)
    {
        pos=c;
        for(d=c+1;d<n;d++)
        {
            if(a[pos]>a[d])
            pos=d;
        }
        if (pos!=c)
        {
            t=a[c];
            a[c]=a[pos];
            a[pos]=t;
        }
    }
    printf("Sorted array:");
        for(c=0;c<n;c++)
            printf("%d\n",a[c]);
    return 0;
}