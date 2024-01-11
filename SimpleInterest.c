#include <stdio.h>
void main()
{
    int p;
    float n,r,si;
    
    printf("Enter Principle amount");
    scanf("%d",&p);

    printf("Enter Time period(in years)");
    scanf("%d",&n);

    printf("Enter Rate of Interest");
    scanf("%d",&r);
    
    si = p * n * r/100;
    printf("%f\n" ,si);
}