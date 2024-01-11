#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[8],search,i,j;
    printf("Enter 8 numbers:\n");
    for(i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a no to search:");
    scanf("%d",&search);
    for(i=0;i<8;i++)
    {
        if(arr[i]==search){
        printf("%d is present at location %d",search,i+1);
        break;
        }
    }
    if(i==8){
        printf("%d is not found",search);
    }
    getch();
}