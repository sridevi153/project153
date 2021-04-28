#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
   int k,max=0,min=100000;
   char str[20];
   
   while(1)
   {
       
        printf("enter the string\n");
        scanf("%s",str);
   
        k= atoi(str);
        int j=strcmp(str,"done");
        if(j==0)
        {   printf("%d\n",max);
            printf("%d\n",min);
            exit(0);
        }
        if(k==0)
            continue;
        else 
        {
            if(k>max)
                max=k;
            if(k<min)
              min=k;
            continue;
        }
            
   }
   

}
