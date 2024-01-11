#include<stdio.h>
#include<conio.h>
void main()
{
    int m1, m2, m3, m4, m5, aggr;
    float prcnt;
    printf("Enter the marks in first subject:");
    scanf("%d",&m1);
    printf("Enter the marks in second sbject:");
    scanf("%d",&m2);
    printf("Enter the marks in third subject:");
    scanf("%d",&m3);
    printf("Enter the marks in fourth subject:");
    scanf("%d",&m4);
    printf("Enter the marks in fifth subject:");
    scanf("%d",&m5);
    aggr=m1+m2+m3+m4+m5;
    prcnt=aggr/5;
    printf("Aggregate marks=%d\n",aggr);
    printf("Percentage=%f\n",prcnt);
    getch();
}