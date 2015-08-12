#include<stdio.h>
int main(){
	int n,i,j;
	float x[50], y[50], sum=0, up=0, k;
	printf("Enter the number of inputs: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the value of x[%d]: ",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++){
		printf("Enter the value of y[%d]: ",i);
		scanf("%f",&y[i]);
	}
	printf("Enter the value of k: ");
	scanf("%f",&k);
	for(i=0;i<n;i++){
		up=1;
		for(j=0;j<n;j++){
		  if(i!=j)
		    up=((k-x[j])/(x[i]-x[j]))*up;
		}
		up=up*y[i];
		sum=sum+up;
	}
	printf("The result: %f\n",sum);
}
