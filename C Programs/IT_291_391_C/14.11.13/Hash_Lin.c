#include<stdio.h>
#include<stdlib.h>
#define MAX 11
int table[MAX];
void insert(int item, int table[]){
	int i,loc,h;
	h=hash(item);
	loc=h;
	for(i=1;i!=MAX-1;i++){
		if(table[loc]=-1){
			table[loc]=item;
			printf("Inserton Successful.");
			return;
		}
		if(table[loc]==item){
			printf("Duplicate.");
			return;
		}
		loc=(h+i)%MAX;
	}
}
int search(int key,int table[]){
	int i,loc,h;
	h=hash(key);
	loc=h;
	for(i=0;i!=MAX-1;i++){
		if(table[loc]=key)
			return loc;
		if(table[loc]=-1)
			return -1;
		loc=(h+i)%MAX;
	}
}
int hash(int item){
	return(item%MAX);
}
void display(int table[]){
	int i;
	printf("The hash table is: \n");
	for(i=0;i<=MAX;i++)
		printf("%d ",table[i]);
}
void main(){
	int choice,d,key,res,i;
	for(i=0;i<=MAX;i++)
                table[i]=-1;
	do{
		printf("\nPress\n[1]To insert.\n[2]To linear probe.\n[3]To display.\n[4]To exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter data: ");
				scanf("%d",&d);
				insert(d,table);
				break;
			case 2:
				printf("Enter the number to sarch for: ");
				scanf("%d",&key);
				res=search(key,table);
				if(res==-1)
					printf("Element not found.");
				else
					printf("Element found at location %d.",res+1);
				break;
			case 3:
				display(table);
				break;
			case 4:
				exit(0);
				break;
		}
	}while(1);
}
