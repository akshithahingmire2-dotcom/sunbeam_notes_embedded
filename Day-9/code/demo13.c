#include<stdio.h>
#include<stdlib.h>

/*
	Dynamic / Heap Memory Allocation
	--------------------------------

	Memory in C can be allocated in two ways:
	1. Static allocation  → stack memory
	2. Dynamic allocation → heap memory

	Dynamic memory allocation functions:

	1. malloc()
		- Allocates memory block on heap
		- Memory is NOT initialized (contains garbage values)

	2. calloc()
		- Allocates memory block on heap
		- Memory is initialized to 0

	3. realloc()
		- Used to increase or decrease previously allocated memory size

	All these functions are declared in <stdlib.h>

	4. free()
		- Used to release dynamically allocated memory
		- If we do not free heap memory, it causes memory leak
*/

int main()
{
	// Allocate memory for 'size' number of integers on heap

	int size;

	printf("Enter the size : ");
	scanf("%d",&size);

	/*
	malloc()

	Syntax:
	ptr = malloc(size_in_bytes);

	sizeof(int) * size
	→ total memory required for 'size' integers
	*/

	int *ptr = malloc( sizeof(int) * size);

	// Check if memory allocation failed
	if(ptr == NULL)
	{
		printf("Malloc() failed..\n");
		return  0; // terminate program
	}	

	// Assign values to allocated memory
	ptr[0] = 10;
	ptr[1] = 20;
	ptr[2] = 30;
	ptr[3] = 40;
	ptr[4] = 50;

	for(int i = 0 ; i < size ; i++)
	{
		printf("Enter element %d : ",i);
		scanf("%d",&ptr[i]);
	}
	//----------------------------------------------------------------
	// Print elements stored in dynamic array
	for(int i = 0 ; i < size ; i++)
	{
		printf("ptr[%d] = %d \n",i,ptr[i]);
	}
	//----------------------------------------------------------------
	free( ptr ); // free the heap allocated memory block
	/*
	free()
		- Used to release dynamically allocated memory.
		- If we do not free heap memory, it causes memory leak.
	*/
	//----------------------------------------------------------------
	return 0;
}