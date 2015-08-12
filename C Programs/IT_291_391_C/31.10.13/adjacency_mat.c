#include<stdio.h>
#include<stdlib.h>
void main(){
	int n,i,j,f[50][50];
	char a[20];
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element of node [%d]: ",i);
		scanf(" %c",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Is there a connection between %d and %d?",i,j);
			scanf("%d",&f[i][j]);
		}
	}
	printf("The adjacency matrix:\n  ");
	for(i=0;i<n;i++)
		printf("%c ",a[i]);
	printf("\n");
	for(i=0;i<n;i++){
                for(j=0;j<n;j++){
			if(j==0)
				printf("%c ",a[i]);
                        printf("%d ",f[i][j]);
                }
		printf("\n");
        }
}
