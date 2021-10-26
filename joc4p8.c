#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the string\n");
	gets(str);
	int count = 0,c_count;
	char b;
	for(int i=0;str[i]!='\0';i++)
	{
		char a = str[i];
		c_count = 1;
		if(a!=' ')
		{
		for(int j=i+1;str[j]!='\0';j++)
		{
			if(a==str[j])
			  	c_count++;
		}
		if(c_count>count)
		{
			count = c_count;
			b = a;
		}
		}
	}
	printf("The most frequent alphabet is %c with count %d",b,count);
}
