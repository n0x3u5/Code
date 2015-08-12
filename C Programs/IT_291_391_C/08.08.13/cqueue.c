#include<stdio.h>
#include<stdlib.h>
# define MAX 5
int front=0;
int rear=0;
int flag=0;
int cqueue[MAX];
void insertCQ(int item){
	if(front==rear && flag==1)
		printf("Queue is full.");
	else{
		cqueue[rear]=item;
		rear=(rear+1)%MAX;
		flag=1;
	}
}
void deleteCQ(){
	int item=-1;
	if(front==rear && flag==0)
		printf("Queue is empty.");
	else{
		item=cqueue[front];
		front=(front+1)%MAX;
		flag=0;
	}
}
void displayCQ(){
	int i;
	if(front==rear && flag==0)
		printf("Queue is empty.");
	else{
		if(front<rear){
			for(i=front;i<=rear-1;i++)
				printf("%d ",cqueue[i]);
		}
		else{
			for(i=front;i<=MAX-1;i++)
				printf("%d ",cqueue[i]);
			for(i=0;i<rear;i++)
                                printf("%d ",cqueue[i]);
                }
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
				insertCQ(item);
				break;
			case 2:
				deleteCQ();
				break;
			case 3:
				printf("The elements in the queue are:\n");
				displayCQ();
				break;
			case 4:
				exit(0);
			default:
				printf("Incorrect Input.");
				break;
		}
	}while(1);
}
