#include<stdio.h>
struct complex
{
	float real;
	float img;
};
int main()
{
	struct complex c1, c2, sum, mult;
	printf("For 1st Complex Number:-\n");
	printf("Enter value of real part: ");
	scanf("%f", &c1.real);
	printf("Enter value of imaginary part: ");
	scanf("%f", &c1.img);
	printf("For 2nd Complex Number:-\n");
	printf("Enter value of real part: ");
	scanf("%f", &c2.real);
	printf("Enter value of imaginary part: ");
	scanf("%f", &c2.img);
	sum.real = c1.real + c2.real;
	sum.img = c1.img + c2.img;
	printf("The sum is: %.2f + i%.2f\n", sum.real, sum.img); 	
	mult.real = (c1.real*c2.real) - (c1.img*c2.img);
	mult.img = (c1.real*c2.img) + (c1.img*c2.real);
	printf("The product is: %.2f + i%.2f\n", mult.real, mult.img); 	
	return 0;
}
