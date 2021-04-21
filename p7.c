#include<stdio.h>
#include<stdlib.h>
struct num
{
	int a,b;
};
struct num n;
int compute(struct num x)
{
	return (x.a)+(x.b);
}
void main()
{
	int a,b,sum;
	printf("enter two numbers");
	scanf("%d %d",&n.a,&n.b);
	sum = compute(n);
	printf("%d",sum);
}

