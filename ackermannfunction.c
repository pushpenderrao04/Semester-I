#include<stdio.h>
#include<conio.h>
void main()
{
    int m,n,x;
    int Acker(int m,int n);
    printf("Enter values of m and n:");
    scanf("%d%d",&m,&n);
    x=Acker(m,n);
    printf("%d",x);
    getch();
}
int Acker(int m, int n)
{
    if(m==0){
        return n+1;
    }
    else if(n==0){
        return Acker(m-1,1);
    }
    else{
        return Acker(m-1,Acker(m,n-1));
    }
}