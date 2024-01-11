#include <stdio.h>
#include <conio.h>
void main()
{
    int cp, sp, p, l;
    printf("Enter cost price:");
    scanf("%d",& cp);
    printf("Enter the selling price:");
    scanf("%d",& sp);
    if(cp<sp)
    {
        int p=sp-cp;
        printf("Profit:%d", p);
    }
    else
    {
    int l=cp-sp;
    printf("Loss:%d", l);
    }
    getch();
}