#include<stdio.h>
#include<stdlib.h>
struct dnode{
	int data;
	struct dnode *next;
	struct dnode *prev;
};
typedef struct dnode dnd;
void insert_begin(dnd**,int);
void insert_before(dnd**,int);
void display(dnd**);
void delete_keynode(dnd**,int);
void reverse(dnd**);
void main(){
	dnd *start=NULL;
	int choice,d,key;
	do{
		printf("\nPress\n[1]To insert begin.\n[2]To insert before.\n[3]To delete a key node.\n[4]To display the list.\n[5]To display the reverse of the list.\n[6]To exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter data: ");
				scanf("%d",&d);
				insert_begin(&start,d);
				break;
			case 2:
				printf("Enter the node number before which the data is to be inserted: ");
				scanf("%d",&key);
				insert_before(&start,key);
				break;
			case 3:
				printf("Enter the node number to be deleted: ");
				scanf("%d",&key);
				delete_keynode(&start,key);
				break;
			case 4:
				printf("The linked list: ");
				display(&start);
				break;
			case 5:
				reverse(&start);
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Invalid input.");
		}
	}while(1);
}
void insert_begin(dnd**h, int d){
	dnd *temp;
	temp=(dnd*)malloc(sizeof(dnd));
	if(temp==NULL){
		printf("\nInsuficient memory.");
		return;
	}
	temp->data=d;
	temp->prev=NULL;
	temp->next=*h;
	if(*h!=NULL)
		(*h)->prev=temp;
	*h=temp;
}
void insert_before(dnd**h,int key){
	dnd *temp, *current;
	current=*h;
	while(current!=NULL){
		if(current->data==key)
			break;
		current=current->next;
	}
	if(current==NULL){
		printf("Key not found!");
		return;
	}
	temp=(dnd*)malloc(sizeof(dnd));
	if(temp==NULL){
		printf("Insufficient memory!");
		return;
	}
	printf("Enter data: ");
	scanf("%d",&temp->data);
	temp->next=current;
	temp->prev=current->prev;
	if((current->prev)!=NULL)
		(current->prev)->next=temp;
	else
		*h=temp;
	current->prev=temp;
}
void display(dnd**h){
	dnd *current;
	if(*h==NULL){
		printf("List is empty.");
		return;
	}
	current=*h;
	while(current!=NULL){
		printf("\n%d",current->data);
		current=current->next;
	}
}
void delete_keynode(dnd**h,int key){
	dnd *current;
	current=*h;
	while(current!=NULL){
		if(current->data==key)
			break;
		current=current->next;
	}
	if(current==NULL){
		printf("Key not found.");
		return;
	}
	if(current->next!=NULL)
		(current->next)->prev=current->prev;
	if(current->prev!=NULL)
		(current->prev)->next=current->next;
	else
		*h=current->next;
	printf("Deleted element is %d.",current->data);
	free(current);
}
void reverse(dnd**h){
	dnd *current=*h;
	while(current->next!=NULL)
		current=current->next;
	do{
		printf("%d\n",current->data);
		current=current->prev;
	}while(current!=NULL);
}
