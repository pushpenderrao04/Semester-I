#include<stdio.h>
#include<conio.h>
void main()
{
    int bs, da, dap, hrap, hra, gs;
    printf("Enter Base Salary:");
    scanf("%d",&bs);
    printf("Enter d.a. percentage:");
    scanf("%d",&dap);
    printf("Enter h.r.a. percentage:");
    scanf("%d",&hrap);
    da=(dap*bs)/100;
    hra=(hrap*bs)/100;
    gs=bs+da+hra;
    printf("gloss salary = %d",gs);
    getch();
}