#include<stdio.h>
int main()
{
	int arr[10][10], r, c, i, j, trans[10][10];
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	printf("Enter the number of columns: ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element [%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			//printf("%d\t", arr[j][i]);
			trans[i][j]=arr[j][i];
	}
	printf("The transposed matrix is: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
			printf("%d\t", trans[i][j]);
		printf("\n");
	}
}
