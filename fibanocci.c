#include<stdio.h>
#include<conio.h>
void main()
{
    int i,first,second,next,t;
    first=0;
    second=1;
    printf("Enter no of terms ");
    scanf("%d",&t);
    printf("%d\n%d\n",first,second);
    for(i=0;i<=t;i++)
    {
        next=first+second;
        printf("%d\n",next);
        first=second;
        second=next;
    }
    getch();
}