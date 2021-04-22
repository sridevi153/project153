#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int i,n;
    printf("enter the interger");
    scanf("%d",&n);
    while(n%2==0)
    {
        printf("2");
        n/=2;
    }
    for(i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            printf("%d\t",i);
            n/=i;
        }
    }
    if(n>2)
    {
        printf("%d\t",n);
    }
}
