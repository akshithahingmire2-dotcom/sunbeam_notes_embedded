#include<stdio.h>
#include<stdlib.h>

// Dynamic Memory Allocation using malloc() and free()

int main()
{
	int size;

	printf("Enter Size : ");
	scanf("%d",&size); // user enters number of integers to store (example: 5 or 10)

	/*
	Allocate memory for 'size' integers on heap.

	sizeof(int) * size
	→ total number of bytes required
	*/

	int *ptr = (int *)malloc( sizeof(int) * size ); // dynamic allocation
	
	// Check if malloc failed to allocate memory
	if( ptr == NULL )
	{
		printf("Malloc() failed..Memory not alloacated..\n");
		return 0; // Exit main function / Terminate program
	}
	
	int i;

	// Accept values from user and store them in allocated heap memory
	for(i = 0 ; i < size ; i++)
	{
		printf("Enter %d value : ",i);
		scanf("%d",&ptr[i]); // store value in dynamically allocated array
	}

	// Print values stored in dynamically allocated memory
	for(i = 0 ; i < size ; i++)
	{
		printf("ptr[%d] = %d \n",i , ptr[i]);
	}

	/*
	Memory allocated using malloc() should always be freed
	to avoid memory leaks.
	*/
	free(ptr);  // release allocated heap memory to avoid memory leaks
	ptr = NULL; // Set pointer to NULL after freeing memory to avoid dangling pointer issues

	return 0;
}

