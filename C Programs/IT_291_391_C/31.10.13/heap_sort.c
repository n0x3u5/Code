#include<stdio.h>
void max_heapify(int a[], int ub, int k){
	int l=2*k+1;
	int t;
	while(l<=ub){
		if(l<ub && a[l]<a[l+1])
			l++;
		if(a[l]>a[k]){
			t=a[l];a[l]=a[k];a[k]=t;
		}
		k=l;
		l=2*k+1;
	}
}
void create_maxheap(int a[], int n){
	int i;
	for(i=(n-2)/2;i>=0;i--)
		max_heapify(a,n-1,i);
}
void delete_maxheap(int a[], int n){
	int i,t;
	for(i=n-1;i>0;i--){
		t=a[i];a[i]=a[0];a[0]=t;
		max_heapify(a,i-1,0);
	}
}
void heap_sort(int a[], int n){
	create_maxheap(a,n);
	delete_maxheap(a,n);
}
void main(){
	int i,a[50],n;
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter element [%d]: ",i);
		scanf("%d",&a[i]);
	}
	heap_sort(a,n);
	printf("The elements sorted ascendingly are:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
