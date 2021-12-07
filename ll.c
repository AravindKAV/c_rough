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

}
for(i=0;i<n;i++)
{
printf("The element at array[%d] is  %d \n",i,a[i]);
}
return 0;


}
