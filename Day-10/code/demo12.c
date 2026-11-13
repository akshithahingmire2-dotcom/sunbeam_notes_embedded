#include<stdio.h>
#include<stdlib.h>

/*
	accept()

	Purpose:
	--------
	Accept values for a 2D array from the user.

	Parameters:
	arr → 2D array (base address of array)
	row → number of rows
	col → number of columns

	Note:
	In function parameter, column size must be specified.
	arr[][2] → number of columns = 2
*/

void accept(int arr[][2] , int row , int col)
{
	int i,j;

	printf("Enter values...\n");

	// Traverse rows
	for(i=0 ; i < row ; i++)
	{
		// Traverse columns
		for(j = 0 ; j < col ; j++)
		{
			printf("arr[%d][%d] : ",i,j);

			// Store value at ith row and jth column
			scanf("%d",&arr[i][j]);
		}
	}
}


/*
	print()

	Purpose:
	--------
	Print values stored in the 2D array.

	Parameters:
	arr → 2D array
	row → number of rows
	col → number of columns
*/

void print(int arr[][2] , int row , int col)
{
	int i,j;

	printf("values...\n");

	// Traverse rows
	for(i=0 ; i < row ; i++)
	{
		// Traverse columns
		for(j = 0 ; j < col ; j++)
		{
			printf("arr[%d][%d] :  %d",i,j,arr[i][j]);
		}
	}
}

int main()
{
	/*
	2D array declaration

	arr[row][column]

	Here:
	rows = 2
	columns = 2
	*/

	int arr[2][2];

	// Accept values in 2D array
	accept(arr,2,2);

	// Print values of 2D array
	print(arr,2,2);

	return 0;
}