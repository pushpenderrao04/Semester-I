#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20;
    void swapv(int,int);
    swapv(a,b);
    printf("\n a=%d b=%d",a,b);
    getch();
}
void swapv(int x,int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("\n x=%d y=%d",x,y);
}
