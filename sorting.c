#include<stdio.h>
void main()
{
int a[50],b,c,n,i;
 
	printf("Enter the number of Elements :");
	scanf("%d",n);
 
	printf("\nEnter the elements :");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
 
	for(i=0;i<n;i++)
  		{
   			for(j=i+1;j<n;j++)
     				{
       					if(a[i]>a[j])
						{
							b=a[i];
							a[i]=a[j];
							a[j]=a[i];
						}
				}
		}
}
