#include<stdio.h>
#include<conio.h>
void main()
{
    float f, cs;
    printf("Enter the temprature in fahrenheit:");
    scanf("%f",&f);
    cs=5*f/9+32;
    printf("The temprature in celsius:%f",cs);
    getch();
}