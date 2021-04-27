#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i;
    char name[30];
    printf("enter the string");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            printf("\n");
            continue;
        }
        printf(" %c",name[i]);
    }
}
