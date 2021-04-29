#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 40

struct book
{
    char title[20];
    char author[20];
    int price;
    int page;
};

typedef struct book b;


int main()
{
    b array[max];
    int n,x;
    printf("Enter the number of books you want to have\n");
    scanf("%d",&n);
    printf("Enter the details one by one\n");
    for(int i=0;i<n;i++)
    {
        printf("FOR BOOK %d:\n",i+1);
        scanf("%s%s%d%d",array[i].title,array[i].author,&array[i].price,&array[i].page);
    }

    for(int i=0;i<n;i++)
    {
        printf("enter the title, author, price, pages for book %d:\n",i+1);
        printf("%s  %s  %d  %d\n",array[i].title,array[i].author,array[i].price,array[i].page);
    }
    printf("if you want to update press 1 else 0\n");
    scanf("%d",&x);

    if(x)
    {
        char tit[100];
        int f = 0,pr;
        printf("Enter the title of the book\n");
        scanf("%s",tit);
        printf("Enter updated price\n");
        scanf("%d",&pr);
        for(int i=0;i<n;i++)
        {
            if(strcmp(tit,array[i].title)==0)
            {
                array[i].price = pr;
                f =1;
                printf("THE UPDATED DETAILS FOR BOOK %d:\n",i+1);
                printf("%s  %s  %d  %d\n",array[i].title,array[i].author,array[i].price,array[i].page);
                break;
            }
        }
            if(!f)
                printf("Book not found\n");
    }
    else
        printf("end\n");
    return 0;
}
