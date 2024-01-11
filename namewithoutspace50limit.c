#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name:");
    scanf("%s", &name);
    printf("How are you %s?", name);
    return 0;
}