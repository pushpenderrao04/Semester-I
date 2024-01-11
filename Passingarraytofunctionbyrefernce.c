/*Passing array to a function*/
/*Call by refernce*/
#include<stdio.h>
#include<conio.h>
void display(int *);
int main()
{
    int i;
    int marks[5];
    for(i=0;i<=4;i++)
    {
        printf("\nEnter the marks of student%d:",i+1);
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=4;i++)
    {
        display(&marks[i]);
    }
}
void display(int *n)
{
    printf("%d\n", *n);
}