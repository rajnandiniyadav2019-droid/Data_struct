#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct stack
{
int arr[SIZE];
int top;
};
void init_stack(struct stack *p)
{
	p->top=-1;
}
void push(struct stack *p, int data )
{
	p->top++;
	p->arr[p->top]= data;

}
void pop(struct stack *p)
{
   p->top--;
}
int peek(struct stack *p)
{
  return p->arr[p->top];

}
int stack_full(struct stack *p)
{
  if(p->top==SIZE-1)
	  return 1;
  else 
	  return 0;
}
int stack_empty(struct stack *p)
{
if(p->top==-1)

  return 1;
else
return 0;
}
int revers(struct stack *p)
{
    for(int i=0;i<=SIZE-1;i++)
	{
        for (int j=i+1; j<SIZE;j++)
		{
			if(p->arr[i]<p->arr[j])
			{
		       int temp= p->arr[i];
			   p->arr[i]= p->arr[j];
			   p->arr[j]=temp;
			}
	}
		printf("array is revers %d\n", p->arr[i]);
}
}
int main()
{
struct stack s;
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
	 case 4:revers(&s);
 
             break;
          default: printf("invalide choice\n"); 
 }
}while (choice!=0);

return 0;
}
