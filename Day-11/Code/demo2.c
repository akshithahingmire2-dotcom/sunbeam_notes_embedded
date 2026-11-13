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

int main()
{
	// Create 2 D array using malloc
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

	//----------------------------------------------------------

	// accept values into 2D array
	
	for(i=0 ; i < row ; i++)
	{
		for(j = 0 ; j < col ; j++)
		{
			// printf("ptr[%d][%d] : ",i,j);
			// scanf("%d",&ptr[i][j]);

			printf(" *(ptr + %d) + %d  : ",i,j);

			/*
			ptr+i      → address of ith row
			*(ptr+i)   → base address of that row
			*(ptr+i)+j → address of element [i][j]
			*/

			scanf("%d",*(ptr+i)+j);
		}
	}

	// display array values
	for( i = 0 ; i <  row ; i++)
	{
		for(j=0 ; j < col ; j++)
		{
			// printf("ptr[%d][%d]  : %d  \n",i,j,ptr[i][j]);

			printf(" *(*(ptr + %d) + %d) : %d \n",i,j,*(*(ptr+i)+j));

			/*
			*(*(ptr+i)+j)
			→ value stored at arr[i][j]
			*/
		}
	}


	//---------------------------------------------------
	// Free dynamically allocated memory

	for(i=0 ; i< row ; i++)
	{
		free( ptr[i] ); // free each row
	}	

	free(ptr); // free row pointer array

	//------------------------------------------------------

	return 0;
}