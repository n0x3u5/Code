#include<stdio.h>
#include<stdlib.h>
void display(int *, int);
void sort(int *, int);
int search(int *, int, int, int);
int main()
{
	int ele_num, i, item;
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
	printf("The sorted array is: \n");
	display(inp_arr, ele_num);
	printf("Enter the element to search for: ");
	scanf("%d", &item);
	int pos = search(inp_arr, 0, ele_num-1, item);
	if(pos==0)
		printf("The item was not found.\n");
	else
		printf("The item %d was found at position %d\n", item, pos+1);
	return 0;
}

int search(int *inp_arr, int lb, int ub, int item)
{
	int mid;
	if(lb==ub)
	{
		if(inp_arr[lb]==item)
		{
			return lb;
		}
		else
			return 0;
	}
	else
	{
		mid=(lb+ub)/2;
		if(inp_arr[mid]==item)
			return mid;
		else
		{
			if(inp_arr[mid]<item)
				search(inp_arr, mid+1, ub, item);
			else
				search(inp_arr, lb, mid-1, item);
		}
	}
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
