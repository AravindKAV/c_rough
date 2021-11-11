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
for(i=n;i>=b;i--)
{
a[i]=a[i-1];
}
printf("Enter the number to be added :");
scanf("%d",&c);
a[b-1]=c;
for(i=0;i<n+1;i++)
{
printf("number %d is %d ",i+1,a[i]);
}
printf("\nEnter the position to delete :");
scanf("%d",&d);
for(i=d-1;i<n;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n;i++)
printf("Number %d is %d ",i+1,a[i]);
return 0;
}

