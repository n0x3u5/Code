#include<stdio.h>
#include<stdlib.h>
#define MAX 100
char pop();
void push(char);
char a[MAX];
int top=-1;
void main(){
	int i=0;
	char st [50],revst[50];
	printf("Enter string: ");
	gets(st);
	while(st[i]!='\0'){
		push (st[i]);
		i++;
	}
	i=0;
	while(top>=0)
		revst[i++]=pop();
	revst[i]='\0';
	printf("The reversed string is %s.\n",revst);
}
char pop(){
	if(top==-1)
		return '\0';
	else
		return a[top--];
}
void push(char ch){
	if(top==MAX-1){
		printf("Fatal Error. Overflow imminent. Exiting...");
		exit(0);
	}
	else{
		top++;
		a[top]=ch;
	}
}	
