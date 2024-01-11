#include<stdio.h>
#include<conio.h>
int main()
{
  char firstName[30],lastName[30];
  printf("Type your full name:");
  scanf("%s %s",firstName,lastName);
  printf("Hello %s %s",firstName,lastName);
  return 0;
}