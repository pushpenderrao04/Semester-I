#include <stdio.h>
#include <conio.h>
void main()
{
    int m1, m2, m3, m4, m5, per;
    char grade;
    printf("Enter the marks of 5 subjects:");
    scanf("%d %d %d %d %d", & m1, & m2, & m3, & m4, & m5);
    per=(m1+m2+m3+m4+m5)*100/500;

    if (per>=60)
    printf("A Grade");

    if (per>=50, per<=59)
    printf("B Grade");

    if (per>=40, per<=49)
    printf("C Grade");

    if (per<=40)
    printf("Fail");

    getch();
}