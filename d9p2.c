#include<stdio.h>
#include <stdlib.h>

struct stack
{
    int key;   
};
typedef struct stack s;
s* sf(s* stack,int *capacity)
{
    stack=(s*)realloc(stack,2*(*capacity)*sizeof(s));
    (*capacity)=(*capacity)*2;
    return stack;
}
s* push(s* stack,int *top,int ele,int *capacity)
{
    if(*top>=(*capacity)-1)
    {
	    printf("stack full so incrementing\n");
	    stack=sf(stack,capacity);
    }

    (*top)++;	 
    (stack+*top)->key=ele;
    return stack;
}
void pop(s* stack,int *top)
{
	int itemdel;
	if(*top==-1)
	{
		printf("stack Under flow");
		return;
	}
	itemdel=(stack+*top)->key;
	(*top)--;
	printf("The element deleted%d\t",itemdel);
}
void display(s* stack,int top)
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
		printf("%d\t",(stack+i)->key);
	}
}
void main()
{
	s* stack;
	int top=-1,capacity=1,choice,ele;
    stack=(s*)malloc(sizeof(s)*capacity);
	for(;;)
	{
		printf("press1:Push\n2:pop\n3:display4:exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the ele to be inserted\n");
				scanf("%d",&ele);
				stack=push(stack,&top,ele,&capacity);
				break;
			case 2: pop(stack,&top);
				break;
			case 3: display(stack,top);
				break;
			case 4: exit(0);
		}
	}
}
