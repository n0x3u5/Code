#include<stdio.h>
int linsrch(int[],int,int);
int main(){
	int a[50];
	int pos=0,i,n,key;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to search for: ");
	scanf("%d",&key);
	pos=linsrch(a,key,n);
	if(pos>=0)
		printf("Element found at position %d.\n",pos+1);
	else
		printf("Element not found.\n");
	return 0;
}
int linsrch(int a[],int key, int n)
{
	int i,flag=0;	
	for(i=0;i<n;i++)
		if(a[i]==key){
			flag=1;
			break;
	}
	if(flag==1){	
		return (i);
	}
	else
		return (-1);
}
