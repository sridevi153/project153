#include<stdio.h>
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
	accept(&a,&b);
	compute(a,b,&sum);
	display(sum);
}

