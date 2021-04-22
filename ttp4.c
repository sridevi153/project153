#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int a,n,k,i;
    printf("enter the number");
    scanf("%d",&n);
    k=n;
    i=(int)(sqrt(k));
    if((i*(i+1))==n)
        a=1;
    else
        a=0;
    a==1?printf("pronic number"):printf("not pronic number");
}
