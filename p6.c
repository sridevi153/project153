#include<stdio.h>
#include<stdlib.h>
struct num
{
	int a,b;
};
typedef struct num n;
void main()
{
	int a,b,sum;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("%d",sum);
}

