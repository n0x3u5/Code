#include<stdio.h>
int main()
{
int a[50],i,j,n,min,temp;
printf("enter the number of element");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
min=i;
for(j=i+1;j<n;j+1)
{
if (a[min]>a[j])
min=j;
}
if[min!=i);
{
temp=a[min]
a[min]=a[i];
a[i]=temp;
}
}
printf("enter the number of element");
}


