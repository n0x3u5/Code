#include<stdio.h>
float func(float);
int main()
{
	float h,s1,s2,ul,ll,in,i;
	printf("Enter the lower limit: ");
	scanf("%f",&ll);
	printf("Enter the upper limit: ");
	scanf("%f",&ul);
	printf("Enter the no. of sub intervals: ");
	scanf("%f",&in);
	h=(ul-ll)/in;
	s1=func(ll)+func(ul);
	for(i=1;i<=in-1;i++){
		ll+=h;
		s2=s2+func(ll);
	}
	s1=(h/2)*(s1+(2*s2));
	printf("The result is: %f\n",s1);
}
float func(float x)
{
	float y;
	y=(4*x)-(3*x*x);
	return y;
}
