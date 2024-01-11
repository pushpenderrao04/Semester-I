#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20;
    void swapr(int *,int *);
    swapr(&a, &b);
    printf("\n a=%d b=%d",a,b);
    getch();
}
void swapr(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\n x=%d y=%d",x,y);
}