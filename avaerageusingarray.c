/*Program to find average marks obtained by a class of 10 students*/
#include<Stdio.h>
#include<conio.h>
void main()
{
    int avg,sum=0;
    int i;
    int marks[30];/*array declaration*/
    for(i=0;i<=29;i++)
    {
        printf("\n Enter marks:"); /*Store data in array*/
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=29;i++)
        sum=sum+marks[i];
    avg=sum/30;
    printf("\n Avg marks=%d",avg);
}