#include<stdio.h>
#include<stdlib.h>

void TOH(int *,int *,int *,int *, int *, int *,int);
void display(int *,int *,int *,int *, int *, int *);

int n1,count=1;

int main()
{
	int n,i;
	int *ta,*tb,*tc,topa,topb,topc;
	printf("Enter the number of discs:");
	scanf("%d",&n);
	n1=n;
	ta=(int *)malloc(sizeof(int)*(n+1));
	tb=(int *)malloc(sizeof(int)*(n+1));
	tc=(int *)malloc(sizeof(int)*(n+1));
	topa=n;
	ta[0]=65;
	tb[0]=66;
	tc[0]=67;
	for(i=1;i<=topa;i++)
		ta[i]=i;
	topb=0;
	topc=0;

	printf("\n Initial state......\n");
		display(ta,&topa,tb,&topb,tc,&topc);

	TOH(ta,&topa,tb,&topb,tc,&topc,n);

	return 0;
}

void TOH(int *ta,int *topa,int *tb, int *topb,int *tc,int *topc,int n)
{
	if(n==1)
	{
		*topc=*topc+1;
		tc[*topc]=ta[*topa];
		*topa-=1;
        printf("\nMovement=%d Intermediate steps......\n",count++);
        printf(" Move from %c to %c \n",ta[0],tc[0]);
		display(ta,topa,tb,topb,tc,topc);
	}
	else
	{
		TOH(ta,topa,tc,topc,tb,topb,n-1);
		TOH(ta,topa,tb,topb,tc,topc,1);
		TOH(tb,topb,ta,topa,tc,topc,n-1);
	}
}
void display(int *ta,int *topa,int *tb,int *topb,int *tc,int *topc)
{
	int i;
	for(i=n1;i>=1;i--)
	{
		printf("\t");
		if(i<=*topa && ta[0]==65)
			printf("%d",ta[i]);
		if(i<=*topb && tb[0]==65)
			printf("%d",tb[i]);
		if(i<=*topc && tc[0]==65)
			printf("%d",tc[i]);
		printf("\t");
		if(i<=*topa && ta[0]==66)
			printf("%d",ta[i]);
		if(i<=*topb && tb[0]==66)
			printf("%d",tb[i]);
		if(i<=*topc && tc[0]==66)
			printf("%d",tc[i]);
		printf("\t");
		if(i<=*topa && ta[0]==67)
			printf("%d",ta[i]);
		if(i<=*topb && tb[0]==67)
			printf("%d",tb[i]);
		if(i<=*topc && tc[0]==67)
			printf("%d",tc[i]);
		printf("\n");
	}
   printf("   -------   -------   -------\n");
   printf("   TOWER A   TOWER B   TOWER C\n");

}
