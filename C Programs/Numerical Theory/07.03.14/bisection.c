#include<stdio.h>
#define limit 0.001
float f( float x )	
	{
		return((x*x*x)-(9*x)+1);		
	}

int main()
{	
	float a,b,x;
	int i=1;
	while(i==1)	
	{	
		printf("enter the the lower and upper limit::");
		scanf("%f%f",&a,&b);
		if(f(a)*f(b)<0)
		{
			printf("%f",(f(a)*f(b)));				
			i=0;
		}
		else 
			printf("invalid input enter the limit again\n::");
	}	
	printf("\n____________________________________________________________\n");	
	printf("i\t    a\t             b\t           x\t        f(x) ");
	
	printf("\n____________________________________________________________\n\n");


	while ((a-b)>limit ||(b-a)>limit)
	{
		x=(a+b)/2.0;
		printf("%d\t%f\t%f\t%f\t%f\n",i++,a,b,x,f(x));
		if(f(x)<0)
		a=x;
		else 
		b=x;
	}
return(0);
}
