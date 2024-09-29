#include <iostream>
using namespace std;

#define MAXSIZE 100

struct stack
{
	int stack[MAXSIZE];
	int top;
};

int main()
{
	struct stack*sp;
	sp->Top= -1;
	
   push(sp);
   push(sp);
   pop(sp);
   
   void push(struct stack*ptr)
   {
   	int item;
   	if (ptr->Top==MAXSIZE-1)
   	{
   		printf("\n The stack is full :");
   		getch();
	   }
	   else
	   {
	   	printf("\n Enter The Element=");
	   	scanf("%d",&item);
	   	ptr->stack[++ptr->top]=item;
	   }
   }
   
}