#include<stdio.h>
#include<conio.h>
void main()
{
    int bs, da, hra, gs;
    printf("Enter details:");
    scanf("%d%d%d",&bs,&da,&hra);
    da=(da*bs)/100;
    hra=(hra*bs)/100;
    gs=bs+da+hra;
    printf("gloss salary = %d",gs);
    getch();
}