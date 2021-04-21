#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,sum;
	a=(int*)malloc(sizeof(int));
	b=(int*)malloc(sizeof(int));
	sum=(int*)malloc(sizeof(int));
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}

