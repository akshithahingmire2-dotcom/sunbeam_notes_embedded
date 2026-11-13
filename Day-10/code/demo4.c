#include<stdio.h>
#include<stdlib.h>

/*
	accept_int_arr()

	Purpose:
	--------
	Accept integer values from the user and store them
	in the dynamically allocated array.

	Parameters:
	ptr  → base address of integer array
	size → number of elements
*/

void accept_int_arr( int *ptr, int size)
{	
	int i;

	// scan values from user
	for(i = 0 ; i < size ; i++)
	{
		printf("Enter %d value : ",i);

		// scanf("%d",&ptr[i]);   // array indexing method

		scanf("%d", (ptr+i) );   // pointer arithmetic method
	}
}

/*
	print_int_arr()

	Purpose:
	--------
	Print values stored in dynamically allocated array.

	Parameters:
	ptr  → base address of array
	size → number of elements

	Note:
	ptr[i]  == *(ptr + i)
*/

void print_int_arr( int ptr[] , int size  )
{
	int i;

	// print values stored in heap memory
	for(i = 0 ; i < size ; i++)
	{
		//printf("ptr[%d] = %d \n",i , ptr[i]) ;

		printf(" *(%lu + %d) = ( %lu )= %d \n",ptr, i ,(ptr+i),*(ptr + i));

		/*
			ptr      → base address of array
			ptr+i    → address of ith element
			*(ptr+i) → value stored at that address
		*/
	}
}



int main()
{
	int size;

	printf("Enter Size : ");
	scanf("%d",&size); // number of elements required

	/*
	Dynamic memory allocation

	sizeof(int) * size
	→ total bytes required
	*/

	int *ptr = (int *)malloc( sizeof(int) * size ); // allocate memory on heap
	
	// check if malloc failed
	if( ptr == NULL )
	{
		printf("Malloc() failed..Memory not alloacated..\n");
		return 0; // terminate program
	}
	
	// accept values into dynamic array
	accept_int_arr(ptr , size);

	// print values stored in array
	print_int_arr(ptr , size);

	free(ptr);  // release allocated heap memory to avoid memory leaks
	ptr = NULL; // Set pointer to NULL after freeing memory to avoid dangling pointer issues

	return 0;
}