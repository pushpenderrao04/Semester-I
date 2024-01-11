#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a,b,c,D,x1,x2;
    printf("Enter the value of a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("\n The value of x1:%f",x1);
        printf("\n The value of x2:%f",x2);
    }
    getch();
}