#include<stdio.h>
void main()
{
int a[50],i,j,n,temp;
printf("enter the number of elements");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
for(j=i-1;j>=0&&temp<a[j];j--)
{
a[j+1]=a[j];
}
a[j+1]=temp;
}
for(i=0;i<n;i++)
{
printf("%d  ",a[i]);
}
}


