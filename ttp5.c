
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int i,n,a[30];
    printf("enter the integer");
    scanf("%d",&n);
    i=0;
    while(n!=1)
    {
        a[i]=n%2;
        n/=2;i++;
    }
    a[i]=n;
    for(i=i;i>=0;i--)
        printf("%d",a[i]);
}
