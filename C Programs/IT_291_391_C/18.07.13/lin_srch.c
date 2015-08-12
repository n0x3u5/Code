#include<stdio.h>
void main(){
	int a[50];
	int i,j,key,n,flag=0;
	printf("Enter the no. of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the element to search for: ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(a[i]==key){
			flag=1;
			printf("Element found at position %d.\n",i+1);
		}
	}
	if(flag==0)
		printf("Element not found.\n");
}
	
