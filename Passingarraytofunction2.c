#include<stdio.h>
void display(int);
int main() {
    int i;
    int marks[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++) 
    {
        display(marks[i]);
    }
    return 0;
}
void display(int m)
{
    printf("%d\n", m);
}