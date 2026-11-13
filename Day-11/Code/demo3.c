#include<stdio.h>
#include<stdlib.h>

/*
	Dynamic 2D Array using malloc()

	Steps:
	1. Allocate memory for row pointers.
	2. Allocate memory for each row (columns).
	3. Access elements using pointer arithmetic.
	4. Free memory properly.

	ptr1 → pointer to pointer (int **)
	ptr  → pointer to array of 'col' integers
*/

void accept_arr(int **ptr, int row, int col);
void display_arr(int **ptr, int row, int col);

int main()
{
	// Create 2D array dynamically using malloc
	int row,col;

	printf("Enter the Row size : ");
	scanf("%d",&row);

	printf("Enter the col size : ");
	scanf("%d",&col);

	/*
	Step 1:
	Allocate memory for 'row' number of pointers.
	Each pointer will store the address of a row.
	*/

	int **ptr = malloc( sizeof(int*) * row  );

	/*
	Step 2:
	Allocate memory for each row (columns).
	Each row contains 'col' integers.
	*/

	int i,j;
	for(i=0 ; i < row ; i++)
	{
		ptr[i] = (int*)malloc(sizeof(int) * col);	
	}

	//--------------------------------------------------------------

	// Accept values into 2D array using function
	accept_arr(ptr,row,col);

	// Display values from 2D array using function
	display_arr(ptr,row,col);

	//---------------------------------------------------
	// Free dynamically allocated memory

	for(i=0 ; i< row ; i++)
	{
		free( ptr[i] ); // free each row block
	}	

	free(ptr); // free row pointer block

	//------------------------------------------------------

	return 0;
}

/*
accept_arr()

Purpose:
--------
Accept values for dynamically allocated 2D array.

Parameters:
ptr → base address of row pointers
row → number of rows
col → number of columns
*/

void accept_arr(int **ptr, int row, int col)
{
	int i,j;

	for(i=0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf(" *(ptr + %d) + %d  : ",i,j);

			/*
			ptr+i      → address of ith row pointer
			*(ptr+i)   → base address of ith row
			*(ptr+i)+j → address of element [i][j]
			*/

			scanf("%d",*(ptr+i)+j);
		}
	}
}

/*
display_arr()

Purpose:
--------
Display elements stored in dynamically allocated 2D array.

Access method:
*(*(ptr+i)+j) → same as ptr[i][j]
*/

void display_arr(int **ptr, int row, int col)
{
	int i,j;

	for(i=0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			printf(" *(*(ptr + %d) + %d) : %d \n",i,j,*(*(ptr+i)+j));

			/*
			*(*(ptr+i)+j)
			→ value stored at arr[i][j]
			*/
		}
	}
}