#include<Stdio.h>
#include<conio.h>
struct book
{
    char name;
    float price;
    int pages;
};
int main()
{
    struct book b1,b2,b3;

    printf("Enter the details of book 1(name,price,pages):");
    scanf("%c %f %d",&b1.name, &b1.price,&b1.pages);
    
    printf("Enter the details of book 2(name,price,pages):");
    scanf("%c %f %d",&b2.name, &b2.price,&b2.pages);
    
    printf("Enter the details of book 3(name,price,pages):");
    scanf("%c %f %d",&b3.name, &b3.price,&b3.pages);
    
    struct book books[100];
    int i;
    for(i<=0;i<100;i++){
        printf("Enter the datils for book %d(name,price,pages):",i+1);
        scanf("%c %d %f",&books[i].name,&books[i].price,&books[i].pages);
    }
    int a;
    float b;
    int *p1;
    float *p2;
    p1=&a;
    p2=&b;
    struct book b4;
    struct book *p3;
    p3=&b4;
    printf("Enter the deatails of book 4(name,price,pages):");
    scanf("%c%f%d",&p3->name,&p3->price,&p3->pages);
    return 0;
}