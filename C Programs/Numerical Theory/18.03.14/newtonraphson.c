#include<stdio.h>
#include<stdlib.h>
#define AC .0001
float calc(float);
float calcd(float);
void main()
{
  float a,b,x,y,h;
  int i=0;
  do
  {
	printf("Enter a (lb): ");
	scanf("%f",&a);
	printf("Enter b (ub): ");
	scanf("%f",&b);
	if((calc(a)*calc(b))<0.0)
			break;
	else
		printf("\nThe range is not valid!");
  }while(1);
  printf("\n*****************************************************************");
  printf("\ni\t\ta\t\th\t\tb\n");
  printf("__________________________________________________________________\n");
  do
  {
	h=-(calc(a)/calcd(a));
	
	b=a+h;
	printf("%d\t%f\t%f\t%f\n",i,a,h,b);
	y=a;
	a=b;
	i++;
  }while((y-b)>AC || (b-y)>AC);
}
float calc(float x)
{
    double y;
    y=(x*x*x)-(9*x)+1;
    return(y);
}
float calcd(float x)
{
    double yd;
    yd=(3*x*x)-(9);
    return(yd);
}
