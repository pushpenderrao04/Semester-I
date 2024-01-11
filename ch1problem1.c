#include<stdio.h>
#include<conio.h>
void main()
{
    float bs, da, hra, gs;
    printf("Enter the base salary of Ramesh:");
    scanf("%f",& bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("The base salary salary of Ramesh is:%f\n",bs);
    printf("The Dearness allowance of Ramesh is:%f\n",da);
    printf("The house rent allowance of Ramesh is:%f\n",hra);
    printf("The gross salary of Ramesh is:%f",gs);
    getch();
}