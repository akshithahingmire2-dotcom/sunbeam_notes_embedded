#include<stdio.h>
#include<stdlib.h>

/*
	Here we will see how to pass a 2D array to a function
	using pointer to array of columns.

	Important concept:

	A 2D array when passed to a function decays into
	a pointer to its first row.

	So the parameter can be written in two equivalent ways:

	1. int arr[][2]
	2. int (*arr)[2]

	Both mean:
	Pointer to array of 2 integers.
*/


int main()
{
	int row=2,col=2,i,j;

	// 2D array initialization
	int arr[2][2]={ {10 , 20 },{ 30 , 40}};

	/*
	ptr is pointer to array of 2 integers

	arr → address of first row
	ptr → points to arr[0]
	*/

	int (*ptr)[2] = arr;
	
	// Passing 2D array directly
	accept_arr(arr,row,col);
	print_arr(arr,row,col);

	// Passing pointer to array
	accept_arr(ptr,row,col);
	print_arr(ptr,row,col);

	return 0;
}

/*
accept_arr()

Purpose:
--------
Accept values for a 2D array.

Parameter forms (both valid):

int arr[][2]
or
int (*arr)[2]

Both represent pointer to array of 2 integers.
*/

void accept_arr(int arr[][2], int row, int col)
//or
//void accept_arr(int (*arr)[2], int row, int col)
{
	int i,j;

	for(i=0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf(" *(arr + %d) + %d  : ",i,j);

			/*
			arr + i      → address of ith row
			*(arr + i)   → base address of row
			*(arr + i)+j → address of element arr[i][j]
			*/

			scanf("%d", *(arr+i)+j );
		}
	}
}

/*
print_arr()

Purpose:
--------
Display elements of the 2D array.

Parameter type:
int (*arr)[2] → pointer to array of 2 integers
*/

//void print_arr(int arr[][2], int row, int col)
//or
void print_arr(int (*arr)[2], int row, int col)
{
	int i,j;

	for(i=0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf(" *(*(arr + %d) + %d) : %d \n",i,j,*(*(arr+i)+j));

			/*
			*(*(arr+i)+j)
			→ value stored at arr[i][j]
			*/
		}
	}
}