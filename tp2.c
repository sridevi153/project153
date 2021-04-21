#include<stdio.h>
void main()
{
	int k,i,a[10],n;	
	printf("enter the number of digits in interger");
	scanf("%d",&n);
	printf("enter the integer");
	scanf("%d",&i);
	for(k=0;k<n;k++)
	{
		a[k]=i%10;
		i=i/10;
	}
	for(k=n-1;k>=0;k--)
		printf("%d \t",a[k]);
}
