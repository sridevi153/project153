#include<stdio.h>
void main()
{
	int k,i,j,n;	
	printf("enter the number of digits in interger");
	scanf("%d",&n);
	printf("enter the integer");
	scanf("%d",&i);
	for(k=0;k<n;k++)
	{
		j=i%10;
		i=i/10;
		if(j%2==0)
			printf("even: %d \t",j);
		else
			printf("odd: %d \t",j);
	}
}
