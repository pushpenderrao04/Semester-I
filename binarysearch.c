#include<stdio.h>
#include<conio.h>
int main()
{
    int i,F,L,M,n,search,arr[50];

    printf("Enter no of elements:");
    scanf("%d",&n);

    printf("Enter the elements (in sorted order):\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter value to find\n");
    scanf("%d",&search);

    F=0;
    L=n-1;
    M=(F+L)/2;

    while(F<=L)
    {
        if (arr[M]<search)
        {
            F=M+1;
        }
        else if(arr[M]==search)
        {
            printf("%d found at location %d",search,M+1);
            break;
        }
        else
        {
            L=M-1;
            M=(F+L)/2;
        }
    }
    if(F>L)
    {
       printf("Not found\n");
    }
    return 0;
}