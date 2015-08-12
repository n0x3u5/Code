#include<stdio.h>
#include<conio.h>

struct stack2Q
{
  int top;
  int a[10];

};

typedef struct stack2Q stk;

stk s1,s2;

void push(stk *s1,int item)
{
	if(s1->top==9)
	{
		printf("Stack overflow");
		return;
	}
	else
	{
		s1->a[++s1->top]=item;
		printf("Pushed");
	}
}

int pop(stk *s)
{
	if(s->top==-1)
	{
		printf("Stack underflow");
		return;
	}
	else
	{
		return(s->a[s->top--]);
	}
}

void display(stk *s)
{
	int tp;
	if(s->top==-1)
	{
		printf("Stack underflow");
		return;
	}
	else
	{
		tp=s->top;
		while(tp>=0)
		    {
		    	printf("\n%d %d\n",s->a[tp],tp);
			tp--;
		    }

	}
}


int main()
{
	s1.top=-1;
  s2.top=-1;
	push(&s1,34);
	push(&s1,35);
	printf("\ns1:");
	display(&s1);
	push(&s2,pop(&s1));
	printf("\ns1:");	display(&s1);
	printf("\ns2:");	display(&s2);
	return 0;
	getch();
}
