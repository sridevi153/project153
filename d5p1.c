#include <stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    char *name;
    printf("enter the limit of string");
    scanf("%d",&n);
    name=(char*)malloc(n*sizeof(char));
    printf("enter the string");
    scanf(" %s",name);
    printf("the string is: %s",name);
}
