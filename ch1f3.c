#include<stdio.h>
#include<conio.h>
void main()
{
    int i, w=841, h=1189, t;
    for(i=0;i<9;i++);
       {
          printf("\n A%d: %d %d", i, w, h);
          t=h;
          h=w;
          w=t/2;
       }
       getch();
}