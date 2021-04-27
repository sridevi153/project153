#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char s[30],a[30];
    int k;
    printtf("enter the string ");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            a[k]=s[i];
            k++;
        }
        else
        {
            a[k]='\0';
            printf("%s", strrev(a));
            printf("\t");
            k=0;
        }
    }
    a[k]='\0';
    printf("%s",strrev(a));
}
