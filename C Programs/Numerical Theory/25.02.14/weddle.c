#include<stdio.h>
float func(float);
int main()
{
	float a,b,h,sum;
	int n;
	printf("Enter the lower limit: ");
	scanf("%f", &a);
	invalid:
	printf("Enter the upper limit: ");
	scanf("%f", &b);
	printf("Enter the number of terms (it must be divisible by 6): ");
	scanf("%d", &n);
	if((n%6)==0)
	{
		h=(b-a)/n;
		sum=0;
		for(;a<b;a+=(6*h))
			sum=sum+((3*(h/10))*(func(a)+(5*func(a+h))+func(a+(2*h))+(6*func(a+(3*h)))+func(a+(4*h))+(5*func(a+(5*h)))+func(a+(6*h))));
		printf("The result is: %f\n", sum);
	}
	else
		printf("Invalid input for number of terms. The input must be divisible by 6.\n");
}
float func(float x)
{
	float y;
	y=((x*x)+2)/((x*x)+1);
	return y;
}
