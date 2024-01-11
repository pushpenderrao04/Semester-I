#include <stdio.h>
#include<conio.h>
int main()
{
   int x=10, y=20;
   void swap(int*, int*);
   printf("\n x=%d y=%d",x,y);
   swap(&x, &y);
   return 0;
}
 
void swap(int *a, int *b)
{
   int t;
   t=*a;
   *a=*b;
   *b=t;   
   printf("\n a=%d b=%d",a,b);
}