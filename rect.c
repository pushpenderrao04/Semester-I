#include <stdio.h>
#include<conio.h>
int main()
{
    float l,b,ar,pm;

    printf("Enter length:",l);
    scanf("%f",&l);

    printf("Enter breadth:",b);
    scanf("%f",&b);

    ar=l*b;
    pm=2*l+2*b;

    printf("Area:%f\n",ar);
    printf("Perimeter:%f\n",pm);

    return 0;
}