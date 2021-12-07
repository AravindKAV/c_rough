#include <stdio.h>
 int main()
 {
 int a=0,n,sum[100];
 printf("\n Enter the size of array \n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 scanf("%d",&sum[i]);
 a=a+sum[i];
 }
 printf("Result is %d \n",a);
 return 0;
 } 
