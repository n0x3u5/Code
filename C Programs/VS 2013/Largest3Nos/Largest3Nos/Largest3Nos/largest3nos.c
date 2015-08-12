//Program to find the largest number from three numbers
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter A: ");
	scanf_s("%d", &a);
	printf("Enter B: ");
	scanf_s("%d", &b);
	printf("Enter C: ");
	scanf_s("%d", &c);

	if (a > b)
	{
		if (a > c)
			printf("A is the largest number.");
		else
			printf("C is the largest number.");
	}
	else
	{
		if (b > c)
			printf("B is the largest number.");
		else
			printf("C is the largest number.");
	}
}