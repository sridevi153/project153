#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define TRUE 1
#define FALSE 0
struct book{
int book_id;
char book_name;
char book_author;
float book_price;
};
void push(struct book,int *,struct book[]);
void pop( int *,struct book[]);
void display( int,struct book[]);
int stackfull(int *);
int stackempty(int *);
int stackfull(int *top){
if(*top==SIZE-1)
return TRUE;
return FALSE;}
int stackempty(int *top){
if(*top==-1)
return TRUE;
return FALSE;
void push(struct book ele,int *top,struct book stack[]){
(*top)++;
stack[*top]=ele;
}
void pop(int *top,struct book stack[]){
struct book pop;
pop=stack[*top];
(*top)--;
}
void display(int top,struct book stack[]){ 
printf("---------------------------------\n");
printf("book_id\t book_name\t book_author\t book_price\t");
printf("---------------------------------\n");
}
int main(){
struct book stack[SIZE],ele;
int ch,item;
int top=-1;
struct book push_item;
struct book pop_item;
struct book display_item;
for(;;) 
printf("1:push 2:pop 3:display 4:exit");
printf("enter your choice\n",ch);
scanf("%d",&ch);
switch(ch){
case 1: if(stackfull(&top)==TRUE)
                      {
                          printf("The Stack is full\n");
                          break;
                      }
                   printf("Enter the book_id,book_name,book_author,book_price\n");
                    scanf("%d%s%s%f%d",&ele.book_id,ele.book_name,ele.book_author,&ele.book_price);
                    push(ele,&top,stack);
                    break;
             case 2: if (stackempty(&top)==TRUE)
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     pop(&top, stack);
                     printf("The detailes of popped record are\n");
                     printf("%d\t %s\t %s\t %.2f\t %d\n", pop_item.book_id, pop_item.book_name, pop_item.book_author, pop_item.book_price);
                     
                    break;       
            
            case 3 : if (stackempty(&top)==TRUE)
                     {
                          printf(" The stack is empty \n");
                          break;
                     }
                     printf("The content of the stack are \n");
                     display(top, stack);
                     break;
            case 4:exit(0);
            default: printf("Enter a valid choice\n");
        }
                    
        
    }

    return 0;
}
