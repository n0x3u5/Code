#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
void insertQ(int item){
	if(rear==MAX-1)
		printf("Queue is full.");
	else
		queue[++rear]=item;
}
int deleteQ(){
	if(front==rear){
		printf("Queue is empty.");
		return(-1);
	}
	else{
		printf("The deleted element is %d.", queue[++front]);
	}
}
void displayQ(){
	int i;
	if(front==rear)
		printf("Queue is empty.");
	else{
		for(i=front+1;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}
int main(){
	int choice,item;
	do{
		printf("\nPress\n[1] For Insertion.\n[2] For Deletion.\n[3] To dispaly the queue.\n[4] To exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the element to be inserted: ");
				scanf("%d",&item);
				insertQ(item);
				break;
			case 2:
				deleteQ();
				break;
			case 3:
				printf("The elements in the queue are:\n");
				displayQ();
				break;
			case 4:
				exit(0);
			default:
				printf("Incorrect Input.");
				break;
		}
	}while(1);
}
