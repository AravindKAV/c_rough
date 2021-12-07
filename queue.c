#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX 100

int stack[MAX];
int top=-1;
int max=100;

bool isEmpty()
	{
	if(top<=-1) 
	{
	return 1;
	}
	else
	{
	return 0;
	}
	}
bool isFull()
	{
	if(top>=max)
	{
	return 1;
	}
	else
	{
	return 0;
	}
	}

void push()
	{
	int value;
	if(isFull())
	{
	printf("Stack is Full \n");
	}
	else
	{
	printf("Enter Push Item :");
	scanf("%d",&value);
	top=top+1;
	stack[top]=value;
	printf("%d pushed to Stack \n",value);
	}
	}
	
void pop()
	{
	if(isEmpty())
	{
	printf("Stack is Empty \n");
	}
	else
	{
	printf("%d is popped out \n",stack[top]);
	top=top-1;
	}
	}
	
void peek()
	{
	if(!isEmpty())
	{
	printf("Top Element is : %d \n",stack[top]);
	}
	else 
	{
	printf("Stack is Empty \n");
	}
	}
	
void display()
	{
	int i;
	if(!isEmpty())
	{
	for(i=0;i<=top;i++)
	{
	printf("Stack[%d] is %d \n",i+1,stack[i]);
	}
	}
	else
	{
	printf("Stack is Empty \n");
	}
	}

	
int main()
	{
	int opt;
	do{
	printf(".............\n");
	printf("1)PUSH \n");
	printf("2)POP \n");
	printf("3)PEAK \n");
	printf("4)DISPLAY\n");
	printf("5)QUIT \n");
	printf(".............\n");
	printf("Choose your option :");
	scanf("%d",&opt);
	switch(opt)
	{
	case 1 :
		push();
		break;
	case 2 :
		pop();
		break;
	case 3 :
		peek();
		break;
	case 4 :
		display();
		break;
	case 5 :
		exit(0);
	default:
	printf("Invalid Option!...Try Again..\n");
	}
	}while(1);
	return 0;
}
	

	
	

