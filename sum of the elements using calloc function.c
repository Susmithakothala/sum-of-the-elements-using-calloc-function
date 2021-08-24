#include<stdio.h>
#include<stdlib.h>
main()
{
int *p,i,n,sum=0;
printf("\nEnter the elements size: ");
scanf("%d",&n);
p=(int *)calloc(n , sizeof(int));
printf("\nEnter the array values: \n");
for(i=0;i<n;i++)
scanf("%d",p+i);
for(i=0;i<n;i++)
{
sum = sum + *p;
p++;
}
printf("\nThe sum of elements is: %d\n",sum);
}