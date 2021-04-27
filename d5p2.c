#include <stdio.h>
#include<stdlib.h>
void display(char *name)
{
    printf("the string is: %s",name);
}
void accept(char *name)
{
    printf("enter the string");
    scanf(" %s",name);
}
void main()
{
    int n;
    char *name;
    printf("enter the limit of string");
    scanf("%d",&n);
    name=(char*)malloc(n*sizeof(char));
    accept(name);
    display(name);
}
