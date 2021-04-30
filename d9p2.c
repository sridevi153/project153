#include <stdio.h>
#include <stdlib.h>
#define max 5
void insert(int q[],int *r,int item)
{
    if(*r==(max-1))
    {
        printf("Queue full\n");
        return;
    }
    (*r)++;
    q[*r]=item;
}

void delet(int q[],int *f,int *r)
{
    if(*f>*r)
    {
        printf("Queue empty\n");
        return;
    }
    printf("The item deleted is %d\n",q[*f]);
    (*f)++;
}

void display(int q[],int f,int r)
{
    if(f>r)
    {
        printf("Queue empty\n");
        return;
    }
    for(int i=f;i<=r;i++)
    {
        printf("%d\t",q[i]);
    }
}

int main()
{
    int q[max],f=0,r=-1;
    int ch,item;
    for(;;)
    {
        printf("press 1.add\t 2.delete\t 3.display\t 4.exit");
        printf("\nEnter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter the element to be inserted\n");
                   scanf("%d",&item);
                   insert(q,&r,item);
                   break;
            case 2:delet(q,&f,&r);
                   break;
            case 3:display(q,f,r);
                   break;
            case 4: exit(0);
        }
    }
}
