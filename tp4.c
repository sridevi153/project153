#include<stdio.h>
void main()
{
	int n,i,flag;
	flag=0;
	printf("enter the integer");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(n==1)
		printf("1 is neither prime nor composite");
	else
	{
		if(flag==1)
			printf("it is not a prime number");
		else
			printf("it is a prime number");
	}
}
