# include <stdio.h>
int main(){
	int i,j,n,d;
	float h,p,x[50],y[50][50],z,pdt,s;
	printf("Enter the number of inputs: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the value of x[%d]: ",i);
		scanf("%f",&x[i]);
	}
	for(i=0;i<n;i++){
		printf("Enter the value of y[%d]: ",i);
		scanf("%f",&y[i][0]);
	}
	printf("Enter the value of z: ");
	scanf("%f",&z);
	for(i=0;i<n;i++){
		if(x[i]<z && z<x[i+1]){
			d=i;
			break;
		}
	}
	h=x[1]-x[0];
	p=(z-x[d])/h;
	s=y[d][0];
	for(j=1;j<=n-1;j++){
		for(i=0;i<=n-1;i++)
			y[i][j]=y[i+1][j-1]-y[i][j-1];
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-i-1;j++)
			printf("%f",y[i][j]);
		printf("\n");
	}
	for(i=1;i<=n-1;i++){
		pdt=y[0][i];
		for(j=1;j<=i;j++)
			pdt=pdt*((p-j+1)/j);
		s=s+pdt;
	}
	printf("The result: %f\n",s);
}
