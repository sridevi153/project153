#include <stdio.h>
#define maxsize 100  
int main()
{
    char str[maxsize];
    int ascii,count=0;

    printf("Enter any string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        ascii=(int)str[i];
        if(ascii==32)
            count++;
    }
    printf("the number of words in input string is:\t%d",count+1);
}
