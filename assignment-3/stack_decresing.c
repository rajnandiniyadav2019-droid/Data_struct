#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
typedef struct stack
{
char arr[SIZE];
int top;

}st;
void init_stack(st *p)
{
	p->top=SIZE;
}
void push(st *p, int data)
{
	p->top--;  
//	p->top++;
 p->arr[p->top]=data;

}
void pop(st *p)
{    

	p->top++; 
//	p->top--; 
}
int peek(st *p)
{
  return p->arr[p->top];
}
int stack_full(st *p)
{
    if(p->top==0)
	return 1;
	else
		return 0;
}

int stack_empty(st *p)
{
  if(p->top==SIZE)
	  return 1;
  else
	  return 0;
}
int display(st *p)
{
 for(int i=SIZE;i>=0;i--)
 {
	 printf("array is :%d\n", p->arr[i]);
}
}
int main()

{
 st s;
 init_stack(&s);
 int choice;

 do
 {
   printf("0.Exit\n 1.push\n2.pop\n 3.peek\n4.display\n");
printf("Enter the choice:\n");
scanf("%d", &choice);
switch(choice)
{

	case 0: exit(0);
	case 1:if(stack_full(&s))
			   printf(" stack is full\n");
		   else
		   {

			   int value;
			    printf("enter the value:\n");
				scanf("%d", &value);
                push(&s, value);
				printf("value is add in stack:%d\n", value);
		   } break;
           
	case 2: if(stack_empty(&s) )
				printf("stack is empty\n");
			else
			{
              int ret= peek(&s);
			  pop(&s);
			  printf("value is that tha pop on :%d\n", ret);
			 
			} break;
	case 3:
		  int res= peek(&s);
			  printf("pop value is:%d\n", res);

break;
	case 4: display(&s); break;
         default: printf("invalide choice\n"); 
}
 }while (choice!=0);

return 0;
}
