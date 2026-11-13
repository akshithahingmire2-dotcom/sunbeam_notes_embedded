#include<stdio.h>
#include<stdlib.h>

// Make the addition of two 2D arrays and store the result in a third 2D array

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

	int arr1[2][2];
	int arr2[2][2];
	int sum3[2][2];

	// Accept values in 2D array
	accept(arr1,2,2);
	accept(arr2,2,2);

	// Add the two 2D arrays and store the result in sum3
	int i, j;
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 2; j++)
		{
			sum3[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	// Print values of the sum array
	print(sum3 ,2,2);

	return 0;
}