#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int a[MAX];
int top=-1;
void push(int item){
	if(top==MAX-1)
		printf("Stack is full.");
	else{
		top++;
		a[top]=item;
	}
}
int pop(){
	if(top==-1)
		printf("Stack is empty.");
	else{
		printf("The deleted element is %d.", a[top]);
		top--;
	}
}
void display(int a[]){
	int i;
	if(top==-1)
		printf("Stack is empty.");
	for(i=top;i>=0;i--)
		printf("%d ",a[i]);
}
void main(){
	int item,choice;
	do{
		printf("\nPress\n[1] For Insertion.\n[2] For Deletion.\n[3] To dispaly the stack.\n[4] To exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter the element to be inserted: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				pop();
				break;
			case 3:
				display (a);
				break;
			case 4:
				exit(0);
			default:
				printf("Incorrect Input.");
				break;
		}
	}while(1);
}
