#include<stdio.h>
#include<stdlib.h>

/*
	realloc()
	---------
	- Used to grow or shrink previously allocated heap memory.

	Working of realloc():

	1. If the required extra memory is available immediately
	   after the current block → memory is extended there.

	2. If the next block is NOT available →
	   the system allocates a new memory block of required size,
	   copies old data to the new block,
	   and frees the old memory block.

	Syntax:
	void *realloc(void *ptr, size_t size);

	ptr  → pointer to previously allocated memory
	size → new size in bytes
*/


int main()
{
	int size;

	printf("Enter the size : ");
	scanf("%d",&size); // example: 5

	/*
	Allocate memory using malloc()

	sizeof(int) * size
	→ total memory required for 'size' integers
	*/

	int *ptr = (int*)malloc( sizeof(int) * size );

	if(ptr == NULL)
	{
		printf("malloc failed..\n");
		return 0;
	}

	int i;

	// Accept values from user
	for(i=0 ; i < size ; i++)
	{
		printf("Enter the %d index : ",i);
		scanf("%d",&ptr[i]);
	}

	printf("------------------------------------------------------\n");

	// Print original array values
	for(i=0 ; i < size ; i++)
	{
		printf("ptr[%d] = %d \n ",i,ptr[i]);
	}

	printf("------------------------------------------------------\n");

	/*
	Increase size of allocated memory using realloc()

	Old size example:
	    5 integers → 20 bytes

	New size:
	    7 integers → 28 bytes
	*/

	int new_size = 7 ;

	ptr = (int*)realloc(ptr, sizeof(int) * new_size );

	// Assign values to newly created positions
	ptr[5] = 99;
	ptr[6] = 88;

	// Print updated array
	for(i=0 ; i < new_size ; i++)
	{
		printf("ptr[%d] = %d \n ",i,ptr[i]);
	}

	printf("------------------------------------------------------\n");

	free(ptr); // release allocated heap memory to avoid memory leaks
	ptr = NULL; // Set pointer to NULL after freeing memory to avoid dangling pointer issues

	return 0;
}