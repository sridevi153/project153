#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int i,j,k,n,d,a[20];
    printf("number of digits in interger");
    scanf("%d",&d);
    printf("enter the integer");
    scanf("%d",&n);
    k=n;
    for(i=0;i<4;i++)
    {
        for(j=1;j<=d;j++)
        {
            a[j]=k%10;
            k/=10;
        }
        for(j=1;j<=d;j++)
        {
            k+=(pow(a[j],2));
        }
    }
    if(k==1)
    {
        printf("%d is a happy number",n);
    }
    else
        printf("%d is not an happy number",n);
}
