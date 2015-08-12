#include<iostream>
using namespace std;

void inp_mat(int (*a)[10],int m,int n=4)
{
	int i,j;	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			cout<<"Enter element ["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}

}

void display(int (*a)[10],int m,int n=4)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			cout<<a[i][j]<<"\t";
		}
		cout<<'\n';
	}		
}

int main()
{
	int m,n,a[10][10];
	cout<<"Enter the number of rows in the matrix: ";
	cin>>m;
	cout<<"Enter the number of columns in the matrix: ";
	cin>>n;
	inp_mat(a,m,n);
	display(a,m,n);
}
