#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
        int id;
        char title[20];
        float price;

};
struct book b;
void main()
{
    printf("enter the book id\t");
    scanf("%d",&b.id);
    printf("enter the book title\t");
    scanf("%s",b.title);
    printf("enter the book price\t");
    scanf("%f",&b.price);
    printf("the id title and price is:\t %d %s %f",b.id,b.title,b.price);
}
