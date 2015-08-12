#include<stdio.h>
struct stud
{
	int roll;
	char name[30];
	int marks;
};
int main()
{
	int num, i;
	struct stud s_arr[50];
	printf("Enter the number of students: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{		
		printf("Input details of Student %d:-\n", i+1);
		printf("Enter roll number: ");
		scanf("%d",&s_arr[i].roll);
		gets(s_arr[i].name);
		printf("Enter name: ");
		gets(s_arr[i].name);
		printf("Enter marks: ");
		scanf("%d",&s_arr[i].marks);
	}
	printf("Students who have scored over 75:-\n");
	for(i=0;i<num;i++)
	{
		if(s_arr[i].marks>=75)
			puts(s_arr[i].name);
	}
	return 0;
}
