#include<stdio.h>
int main()
{
int a[100],b,c,n,i,d;
printf("Enter the  size of the array :");
scanf("%d",&n);

for(i=0;i<n;i++)
{ 
printf("Enter the number %d :",i+1);
scanf("%d",&a[i]);
}

printf("Enter the position to add :");
scanf("%d",&b);
if (b<=n)
	{
		for(i=n;i>=b;i--)
		{
		a[i]=a[i-1];
		}
	printf("Enter the number to be added :");
	scanf("%d",&c);
	a[b-1]=c;
	printf("The new array is ");
	for(i=0;i<n+1;i++)
	{
	printf("%d ",a[i]);
	}
	}
else 
	printf("Invalid Position");
printf("\nEnter the position to delete :");
scanf("%d",&d);
if (d<=n+1)
	{
		for(i=d-1;i<n;i++)
		{
		a[i]=a[i+1];
		}
	printf("The new array is ");
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
	printf("\n");
	}
else
	printf("Invalid Position \n");
return 0;
}

