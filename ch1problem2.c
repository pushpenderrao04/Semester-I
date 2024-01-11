#include<stdio.h>
#include<conio.h>
void main()
{
    float km, m, cm, ft, in;
    printf("Enter the distance in kilometers:");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;
    ft=km*3280.8399;
    in=ft*12;
    printf("The distance in metres is:%f\n",m);
    printf("The distance in centimetres is:%f\n",cm);
    printf("The distance in feet is:%f\n",ft);
    printf("The distance in inches is:%f\n",in);
    getch();
}