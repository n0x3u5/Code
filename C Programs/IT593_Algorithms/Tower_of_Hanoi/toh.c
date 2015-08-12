#include<stdio.h>
#include<stdlib.h>
void T_O_H(char A,char B,char C,int n)
{
	if(n==1)
	{
		printf("Move disk from %c to %c\n ",A,C);
	}
	else
	{
		
		T_O_H(A,C,B,n-1);
		T_O_H(A,B,C,1);
		T_O_H(B,A,C,n-1);
	}

}
int main()
{
	int n;
	int *ta,*tb,*tc;
	char x='A',y='B',z='C';
	printf("Enter the no of disks: ");
	scanf("%d",&n);
	ta=(int *)malloc(sizeof(int)*(n+1));
	tb=(int *)malloc(sizeof(int)*(n+1));
	tc=(int *)malloc(sizeof(int)*(n+1));
	T_O_H(x,y,z,n);
	
	
}
