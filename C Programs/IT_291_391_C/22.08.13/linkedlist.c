#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node nd;
void insert_begin(nd**,int);
void insert_end(nd**,int);
void display(nd**);
void search(nd**,int);
void count_nodes(nd**);
void delete_begin(nd**);
void delete_key(nd**,int);
void rev_link(nd**);
void main(){
	nd *start=NULL;
	int choice,d,key;
	do{
		printf("\nPress\n[1]To insert begin.\n[2]To insert end.\n[3]To delete begin.\n[4]To delete a value.\n[5]To count the number of nodes.\n[6]To display the list.\n[7]To search for an element.\n[8]To reverse the list.\n[9]To exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter data: ");
				scanf("%d",&d);
				insert_begin(&start,d);
				break;
			case 2:
				printf("Enter data: ");
				scanf("%d",&d);
				insert_end(&start,d);
				break;
			case 3:
				delete_begin(&start);
				break;
			case 4:
				printf("Enter the element to be deleted: ");
				scanf("%d",&key);
				delete_key(&start,key);
				break;
			case 5:
				count_nodes(&start);
				break;
			case 6:
				printf("The linked list: ");
				display(&start);
				break;
			case 7:
				printf("Enter element to search for: ");
				scanf("%d",&d);
				search(&start,d);
				break;
			case 8:
				rev_link(&start);
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Invalid input.");
		}
	}while(1);
}
void insert_begin(nd**h, int d){
	nd *temp;
	temp=(nd*)malloc(sizeof(nd));
	if(temp==NULL)
		printf("\nInsuficient memory.");
	temp->data=d;
	temp->next=*h;
	*h=temp;
}
void insert_end(nd**h,int d){
	nd *temp, *current;
	temp=(nd*)malloc(sizeof(nd));
	if(temp==NULL)
		printf("\nInsufficient memory.");
	current=*h;
	while(current->next!=NULL)
		current=current->next;
	temp->data=d;
	temp->next=NULL;
	if(*h==NULL)
		*h=temp;
	else
		current->next=temp;
}
void count_nodes(nd**h){
	nd *current;
	int c=0;
	current=*h;
	while(current!=NULL){
		c++;
		current=current->next;
	}
	printf("No of nodes: %d",c);
}
void display(nd**h){
	nd *current;
	if(*h==NULL)
		printf("List is empty.");
	else{
		current=*h;
		while(current!=NULL){
			printf("\n%d",current->data);
			current=current->next;
		}
	}
}
void search(nd**h,int d){
	nd *current;
	int flag=0;
	if(*h==NULL)
		printf("List is empty.");
	else{
		current=*h;
		while(current!=NULL){
			if(current->data==d){
				printf("Element found at position %d.\n",current->data);
				flag=1;
			}
			current=current->next;
		}
		if(flag==0)
			printf("Element not found.");
	}
}
void delete_begin(nd**h){
	nd *current;
	current=*h;
	if(current==NULL)
		printf("Deletion not possible.");
	else{
		*h=current->next;
		printf("The deleted element is %d.",current->data);
		free(current);
	}
}
void delete_key(nd**h,int key){
	nd *current,*prev;
	int flag=0;
	current=*h;
	prev=*h;
	if(current==NULL){
		printf("Deletion not possible. List is empty.");
		return;
	}
	while(current!=NULL){
		if(current->data==key){
			flag=1;
			break;
		}
		prev=current;
		current=current->next;
	}
	if(flag==1){
		if(prev==current){
			printf("The deleted item is %d.",current->data);
			*h=current->next;
		}
		else{
			prev->next=current->next;
			printf("The deleted element is %d.",current->data);
		}
		free(current);
	}
	else{
			printf("Deletion not possible.");
	}
}
void rev_link(nd**h){
	nd *p,*q,*r;
	p=*h;
	q=p->next;
	if(*h==NULL||p->next==NULL)
		return;
	p->next=NULL;
	while(q!=NULL){
		r=q->next;
		q->next=p;
		p=q;
		q=r;
	}
	*h=p;
	printf("The list has been successfully reversed.");
}
