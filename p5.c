#include<stdio.h>
#include<stdlib.h>
int getmemo()
{
	int p;
	p=(int*)malloc(sizeof(int));
	return p;
}
void accept(int *a, int *b)
{
	printf("enter two numbers");
	scanf("%d %d",a,b);
}
void compute(int a, int b, int *sum)
{
	*sum=a+b;
}
void display(int sum)
{
	printf("%d",sum);
}
void main()
{
	int a,b,sum;
	a=getmemo();
	b=getmemo();
	sum=getmemo();
	accept(&a,&b);
	compute(a,b,&sum);
	display(sum);
}

