#include<stdio.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
void push(int element)
{
	if(top==MAX_SIZE-1)
	{
		printf("stack is overflow:\n");
		return;
	}
	top++;
	stack[top]=element;
}
int pop()
{
	if(top==-1)
	{
	printf("stack is underflow:\n");
	return -1;	
	}
	int element=stack[top];
	top--;
	return element;
}
int peek()
{
	if(top==-1)
	{
		printf("stack is empty:\n");
		return -1;
	}
	return stack[top];
}
int main()
{
	push(90);
	push(70);
	push(10);
	printf("top element :%d\n",peek());
	printf("popped element :%d\n",pop());
	printf("popped element :%d\n",pop());
	printf("top element :%d\n",peek());
	return 0;
}
