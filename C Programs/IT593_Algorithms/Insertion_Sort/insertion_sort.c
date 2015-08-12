#include<stdio.h>
#include<stdlib.h>
void sort(int *, int);
void display(int *, int);
int main()
{
	int ele_num, i;
	int *inp_arr;
	printf("Enter the number of elements: ");
	scanf("%d",&ele_num);
	inp_arr=(int *)malloc(sizeof(int)*ele_num);
	for(i=0;i<ele_num;i++)
	{
		printf("Enter element [%d]: ",(i+1));
		scanf("%d",&inp_arr[i]);
	}
	printf("The input array is: \n");
	display(inp_arr, ele_num);
	sort(inp_arr, ele_num);
	return 0;
}

void sort(int *inp_arr, int ele_num)
{
	int i,j,key;
	for(i=1;i<ele_num;i++)
	{
		j=i-1;
		key=inp_arr[i];
		while(j>=0 && key<inp_arr[j])
		{
			inp_arr[j+1]=inp_arr[j];
			j--;
		}
		inp_arr[j+1]=key;
		printf("Step %d:\n",i+1);
		display(inp_arr, ele_num);
	}
}

void display(int *inp_arr, int ele_num)
{
	int i;
	for(i=0;i<ele_num;i++)
	{
		printf("%d ",inp_arr[i]);
	}
	printf("\n");
}
