#include<stdio.h>
#include<conio.h>
int main()
{
    float r,ar;
    printf("Enter the radius of the circle:",r);
    scanf("%f",&r);
    float pi = 3.14;
    ar=pi*r*r;
    printf("area of circle=%f",ar);
    return 0;
}