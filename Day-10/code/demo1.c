#include<stdio.h>
#include<stdlib.h>

/*
	Dynamic Memory Allocation using malloc()

	malloc()
	--------
	- Used to allocate memory dynamically on heap.
	- Memory returned by malloc() contains garbage values.
	- If memory allocation fails, malloc() returns NULL.

	Syntax:
	ptr = (type *) malloc( total_bytes );

	Example:
	int *ptr = (int *)malloc(sizeof(int) * size);
*/

int main()
{
	int size;

	printf("Enter Size : ");
	scanf("%d",&size); // user enters number of integers (example: 5 or 10)

	// int *ptr = malloc( sizeof(int) * size ); // also valid in C

	/*
	malloc returns:
	---------------
	- address of allocated heap memory
	- NULL if allocation fails

	ptr will store the base address of allocated memory block
	*/

	int *ptr = (int *)malloc( sizeof(int) * size ); // dynamic memory allocation

	//   ptr = (int*) address_of_heap_block
	//   ptr = NULL if malloc fails

	if( ptr == NULL )
	{
		printf("Malloc() failed..Memory not alloacated..\n");
		return 0; // terminate program if memory allocation fails
	}

	/*
	Print initial values stored in heap memory.

	Since malloc() does NOT initialize memory,
	the values printed will be garbage values.
	*/

	int i;

	for(i = 0 ; i < size ; i++)
	{
		printf("ptr[%d] = %d \n",i , ptr[i]) ; // prints garbage values
	}

	/*
	free()
		- Used to release dynamically allocated memory.
		- If we do not free heap memory, it causes memory leak.
	*/

	free(ptr); // Deallocate memory allocated by malloc
	ptr = NULL; // Set pointer to NULL after freeing memory to prevent dangling pointer issues

	return 0;
}