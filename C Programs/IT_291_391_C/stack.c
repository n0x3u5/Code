#include<stdio.h>
#define max 10
int top=-1;int a[max];
void push(int item)
{
if(top==max-1)

printf("the stack is full");
else
{
top=top+1;
a[top]=item;
}
}
void pop()
{
if(top==-1)
{
printf("the stack is empty");
}
else
{
printf("%d",a[top]);
top=top-1;
}
}
void main()
{
int i,n,r;
printf("enter the decimal no");
scanf("%d",&n);
while( n>0)
{
r=n%2;
push(r);
n=n/2;
}
printf("the binary no is");
while(top>=0)
pop();
}


