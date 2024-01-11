#include<conio.h>
#include <stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if (i==j)
            continue;
            printf("i=%d j=%d\n",i,j);
        }
    }
    getch();
}