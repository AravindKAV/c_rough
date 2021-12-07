#include<stdio.h>

int main()
{
int top=-1,data,stack[100],n;
printf("Enter the size :\t");
scanf("%d",&n);



if (sizeof stack == n)
	{
      	printf("Stack is full.\n");
   	}
	
else 
	
{
printf("Enter the elements :");
for(int i=0;i<n;i++)
{
scanf("%d",&stack[i]);
}
printf("Enter the element to add :"); 
scanf("%d",&data);
      	top = top + 1;
	stack[top]=data;
for(int i=0;i<n;i++)
{
printf("%d",stack[i]);
}
  
	} 

return 0;

}


