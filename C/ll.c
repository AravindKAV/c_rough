#include <stdio.h>
int main()
{
int a[100],n,b,i;
 printf("Enter the number of elements :");
 scanf("%d",&n);
 printf("Enter the numbers : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("The elements  array[%d]  %d ",i,a[i]);
}


return 0;


}
