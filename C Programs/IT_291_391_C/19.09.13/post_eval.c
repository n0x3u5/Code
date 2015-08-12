#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 100
int top=-1;
float a[MAX];
int isdigit1(char);
float eval(float, float, char);
void push(float);
float pop();
main(){
	char post[20];
	int i;
	float x,f,opr1,opr2;
	printf("Enter the postfix expression: ");
	gets(post);
	i=0;
	while(post[i]!='\0'){
		if(isdigit1(post[i])==1){
			f=(float)(post[i]-'0');
			push(f);
		}
		else{
			opr2=pop();
			opr1=pop();
			x=eval(opr1,opr2,post[i]);
			push(x);
		}
		i++;
	}
	x=pop();
	printf("The value is %f.",x);
}
int isdigit1(char ch){
	if(ch>='0' && ch<='9')
		return 1;
	else
		return 0;
}
float eval(float opr1, float opr2, char ch){
	float f;
	switch (ch){
		case '+': f=opr1+opr2;break;
		case '-': f=opr1-opr2;break;
		case '*': f=opr1*opr2;break;
		case '/': f=opr1/opr2;break;
		case '^': f=pow(opr1,opr2);break;
	}
	return (f);
}
void push(float f){
	if(top==MAX-1)
		printf("Stack is full.");
	else{
		top++;
		a[top]=f;
	}	
}
float pop(){
	if(top==-1){
		printf("Stack is empty.");
		return(-1);
	}
	else
		return(a[top--]);	
}
