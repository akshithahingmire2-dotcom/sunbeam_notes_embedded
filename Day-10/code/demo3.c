#include<stdio.h>
#include<stdlib.h>

// Dynamic Memory Allocation using malloc() and Pointer Arithmetic

int main()
{
	int size;

	printf("Enter Size : ");
	scanf("%d",&size); // user enters number of elements (example: 5 or 10)

	/*
	Allocate memory for 'size' integers.

	sizeof(int) * size
	→ total bytes required for dynamic array
	*/

	int *ptr = (int *)malloc( sizeof(int) * size ); // dynamic allocation
	
	// Check if memory allocation failed
	if( ptr == NULL )
	{
		printf("Malloc() failed..Memory not alloacated..\n");
		return 0; // terminate program
	}
	
	int i;

	/*
	Accept values from user

	Two ways to store values in dynamic array:

	1. Array indexing
	   scanf("%d",&ptr[i]);

	2. Pointer arithmetic
	   scanf("%d",(ptr+i));
	*/

	for(i = 0 ; i < size ; i++)
	{
		printf("Enter %d value : ",i);

		//scanf("%d",&ptr[i]);   // array indexing

		scanf("%d", (ptr+i) );  // pointer arithmetic
	}

	/*
	Print values stored in dynamically allocated memory

	Key concept:

	ptr[i]     == *(ptr + i)
	&ptr[i]    ==  (ptr + i)
	*/

	for(i = 0 ; i < size ; i++)
	{
		//printf("ptr[%d] = %d \n",i , ptr[i]) ;

		printf(" *(%lu + %d) = ( %lu )= %d \n",ptr, i ,(ptr+i),*(ptr + i));

		/*
			ptr      → base address
			ptr+i    → address of ith element
			*(ptr+i) → value stored at that address
		*/
	}

	return 0;
}