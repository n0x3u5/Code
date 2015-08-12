#include<stdio.h>
#include<math.h>
float func(float);
int main()
{
	float h,s1,s2=0.0,ul,ll,in,s3=0.0;
	int i;
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
		if(i%2==0)
			s2=s2+func(ll);
		else
			s3=s3+func(ll);
	}
	s1=(h/3)*(s1+(2*s2)+(4*s3));
	printf("The result is: %f\n",s1);
}
float func(float x)
{
	float y;
	y=sin(x*x);
	return y;
}
