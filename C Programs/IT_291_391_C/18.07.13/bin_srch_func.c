#include<stdio.h>
void binsrch(int[],int,int);
int main(){
	int a[50];
	int n,i,key;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to search for: ");
	scanf("%d",&key);
	binsrch(a,key,n);
	return (0);
}
void binsrch(int a[],int key,int n){
	int lb=0,ub=n,mid;
	mid=(lb+ub)/2;
	while(lb<=ub && a[mid]!=key){
		if(a[mid]>key)
			ub=mid-1;
		if(a[mid]<key)
			lb=mid+1;
		mid=(ub+lb)/2;
	}
	if(a[mid]==key)
		printf("Element found at position %d.\n",mid+1);
	else
		printf("Element not found.\n");
}
