#include <stdio.h>
#include<conio.h>
int main()
{
    float num1,num2,result;
    int choice;
    printf("Enter the first number:");
    scanf("%f",&num1);
    printf("Enter the second number:");
    scanf("%f",&num2);
    printf("\nMenu:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice (1-4):");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            result=num1+num2;
            printf("Result:%f\n",result);
            break;
        case 2:
            result=num1-num2;
            printf("Result: %f\n",result);
            break;
        case 3:
            result=num1*num2;
            printf("Result:%f\n",result);
            break;
        case 4:
            if (num2!=0)
            {
                result=num1/num2;
                printf("Result:%f\n",result);
            }
            else
            {
                printf("Error:Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }
    return 0;
}