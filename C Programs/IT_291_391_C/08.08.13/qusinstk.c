#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void pop();
void push(int);
void display(int []);
int a[MAX];
int top=-1;
void main(){
	int dec,r;
	printf("Enter the number: ");
	scanf("%d",&dec);
	while(dec!=0){
		r=dec%2;
		push(r);
		dec=dec/2;
	}
	display (a);
}
void pop(){
	if(top==-1)
		printf("Invalid input.");
	else
		top--;
}
void push(int item){
	if(top==MAX-1){
		printf("Fatal Error. Overflow imminent. Exiting...");
		exit(0);
	}
	else{
		top++;
		a[top]=item;
	}
}
void display(int a[]){
	int i;
	if(top==-1)
		printf("Invalid Input");
	printf("The number in binary is: ");
	for(i=top;i>=0;i--)
		printf("%d",a[i]);
	printf("\n");
}
