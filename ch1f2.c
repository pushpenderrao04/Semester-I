#include<stdio.h>
#include<conio.h>
void main()
{
    float l, b, r, pi, pm, arr, arc, circum;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    printf("Enter the length of rectangle:");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&b);
    pi=3.14;
    circum=2*pi*r;
    arc=pi*r*r;
    pm=2*(l+b);
    arr=l*b;
    printf("Circumference of the circle is:%f\n",circum);
    printf("Area of the circle is:%f\n",arc);
    printf("Perimeter of the rectangle is:%f\n",pm);
    printf("area of the Rectangle is:%f\n",arr);
    getch();
}