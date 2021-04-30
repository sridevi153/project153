#include <stdlib.h>
#define ssize 5   

void push(int a[],int *top,int ele)
{
     if(*top==ssize-1)
     {
		printf("stack overflow\n");
		return;
     }

     (*top)++;	 
     a[*top]=ele;
}
void pop(int a[],int *top)
{
	int ele;
	if(*top==-1)
	{
		printf("stack Under flow");
		return;
	}
	ele= a[*top];
	(*top)--;
	printf("The element deleted%d\t",ele);

}
void display(int a[],int top)
{
	int i;
	if(top==-1)
	{
		printf("stack Under flow");
		return;
	}
	printf("Stack contents are\n");
	for(i=0;i<=top;i++)
	{
		printf("%d",a[i]);
	}

}

void main()
{
	int a[ssize];
	int top=-1,dele,choice,ele;

	for(;;)
	{
		printf("press1:Push\n2:pop\n3:display4:exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the ele to be inserted\n");
				scanf("%d",&ele);
				push(a,&top,ele);
				break;
			case 2: pop(a,&top);
				break;
			case 3: display(a,top);
				break;
			case 4: exit(0);
		}
	}
}
