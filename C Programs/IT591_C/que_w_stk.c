#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int pop1();
void push1(int);
int pop2();
void push2(int);
void display();
int top=-1;
int stk1[MAX];
int stk2[MAX];
int pop1()
{
	if(top==-1)
		printf("Queue is empty.");
	else
		push2(stk1[top--]);
}
void push1(int key)
{
	if(top==MAX-1)
		printf("Queue is full.");
	else
		stk1[++top]=key;
}
int pop2()
{
	if(top==-1)
		printf("Queue is empty.");
	else
		return stk2[top--];
}
void push2(int key)
{
	if(top==MAX-1)
		printf("Queue is full.");
	else
		stk2[++top]=key;
}
void display()
{
	int i;
	printf("The elements of the queue are: \n");
	for(i=0;i<MAX;i++)
	{
		printf("%d ",stk2[i]);
	}
}
int main()
{
	int choice, item;
	do
	{
		printf("Press\n[1] To insert\n[2] To delete\n[3] To display\n[4] To exit\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the number to insert: ");
				scanf("%d",&item);
				push1(item);
				pop1();
				break;
			case 2:
				pop2();
				break;
			case 3:
				printf("The content of queue is: \n");
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Entry!");
		}
	}while(1);
}
