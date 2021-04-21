#include<stdio.h>
void main()
{
	int j,n,i,count;
	printf("enter the integer");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
	if(count==2)
		printf("%d \t",i);
	}
}
