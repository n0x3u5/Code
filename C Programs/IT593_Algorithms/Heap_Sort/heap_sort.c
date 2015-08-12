#include<stdio.h>
#include<stdlib.h>

void heapify ( int *, int );
void adjust ( int *, int, int );
void display ( int *, int );

int main ()
{

	int *a;
	int n, i, temp, c;
	
	c=1;
	
	FILE *ifp;
	
	ifp = fopen ( "in.txt", "r" );
	
	if (ifp == NULL )
	{
		printf ( "Can't open file.\n" );
	} 
	
	fscanf ( ifp, "%d", &n );
	a = (int *) malloc ( sizeof ( int )*n ) ;
	
	for( i = 1 ; i <= n; i++ )
		fscanf( ifp, "%d", &a[i] );
		
	fclose (ifp);
	
	printf( "\nThe array input is: \n" );
	display ( a, n );
	printf ( "\n" );
	
	heapify ( a, n );
	
	for ( i = n; i >= 2 ; i-- )
	{
	
		temp = a[i];
		a[i] = a[1];
		a[1] = temp;
		
		adjust ( a, 1, i-1 );
		
		printf ( "Step %d: \n", c);
		display ( a, n );
		
		c++;
	}
	
	printf ( "\nThe sorted array is: \n");
	display ( a, n );
	printf ( "\n" );
	
	return 0;
	
}

void heapify (int *a, int n)
{

	int i;
	
	for ( i = n/2; i >= 1; i-- )
		adjust (a, i, n);
		
}

void adjust (int *a, int i, int n)
{

	int j = 2*i;
	int temp = a[i];
	
	while ( j <= n )
	{
	
		if ( ( j < n ) && ( a[j] < a[j+1] ) )
			j++;
		
		if ( temp >= a[j] )
			break;
			
		a[(j/2)]  = a[j];
		j = 2*j;
		
	}
	
	a[j/2] = temp;
	
}

void display ( int *a, int n )
{

	int i;

	for( i = 1; i <= n; i++ )
		printf("%d ", a[i]);
	
	printf("\n");
	
}
