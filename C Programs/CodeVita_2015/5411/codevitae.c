// flying bird
#include<stdio.h>
#include<math.h>
int main()
{
	double d1,d2,n,y;
	printf("Enter the distance between the pole and the stone in meter:	");
	scanf("%lf",&d1);
	if(d1>0)
	{
		printf("Enter the flying velocity per second:(in meter/sec)	");
		scanf("%lf",&d2);
		if(d2>0)
		{
			printf("Enter the time of flying:	");
			scanf("%lf",&n);
			if(n>0)
			{
				y=sqrt(d2*d2*n*n + 2*d1*d2*n);
				printf("The distance is %.11lf meter",y);
			}
			else
				printf("Invalid Input");
		}
		else
			printf("Invalid Input");
	}
	else
		printf("Invalid Input");
	return(0);
}
