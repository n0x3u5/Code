#include<stdio.h>
#include<stdlib.h>
struct bstree{
	int data;
	struct bstree *left;
	struct bstree *right;
};
typedef struct bstree bst;
/*void insertion(bst**root, int item){
	bst *temp, *current;
	temp=(bst*)malloc(sizeof(bst));
	temp->data=item;
	temp->left=temp->right=NULL;
	if(*root==NULL){
		*root=temp;
		return;
	}
	current=*root;
	while(current!=NULL){
		if(item<=current->data){
			if(current->left==NULL){
				current->left=temp;
				return;
			}
			else
				current=current->left;
		}
		else{
			if(current->right==NULL){
				current->right=temp;
				return;
			}
			else
				current=current->right;
		}
	}	
}*/
bst * insertion(bst*root, int item){
        if(root==NULL){
                root=(bst*)malloc(sizeof(bst));
                root->data=item;
                root->left=NULL;
                root->right=NULL;
        }
        else if(item<root->data)
                root->left=insertion((root->left),item);
        else if(item>root->data)
               root->right= insertion((root->right),item);
        else
                printf("Invalid input.");
        return root;
}
void inorder(bst *root){	
	if(root!=NULL){
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

int search(bst **root, int key){
	bst *current;
	current=*root;
	while(current!=NULL){
		if(key<current->data)
			current=current->left;
		else if(key>current->data)
			current=current->right;
		else
			return current->data;
	}
	return 0;
}
void main(){
	bst *start=NULL;
	int choice,d,key,res;
	do{
		printf("\nPress\n[1]To insert.\n[2]For inorder traversal.\n[3]To search for a value.\n[4]To exit.\nEnter choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter data: ");
				scanf("%d",&d);
				start=insertion(start,d);
				break;
			case 2:
				inorder(start);
				break;
			case 3:
				printf("Enter the number to sarch for: ");
				scanf("%d",&key);
				res=search(&start,key);
				if(res!=0)
					printf("Element found.");
				else
					printf("Element not found.");
				break;
			case 4:
				exit(0);
				break;
			default:
				printf("Invalid input.");
		}
	}while(1);
}
