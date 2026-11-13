#include<stdio.h>
#include<stdlib.h>

// allocate memory for user given size , int on heap using calloc

int main()
{
	int size;

	printf("enter the size : ");
	scanf("%d",&size); // example: 10

	/*
	Allocate memory for 'size' integers

	sizeof(int) = 4 bytes (typically)

	Total memory allocated = size * sizeof(int)
	*/

	//                        4 byte   number of blocks
	int *iptr = (int *)calloc( sizeof(int) , size);

	// check if memory allocation failed
	if( iptr == NULL  )
	{
		printf("calloc gets failed..\n");
		return 0;
	}

	/*
	Print initial values stored in heap memory.

	calloc() initializes all values to 0.
	*/

	int i;

	for(i = 0; i < size ; i++)
	{
		printf("%d ",iptr[i]); // initial value will be 0
	}

	printf("\n");

	/*
	Accept integer values from user and store them
	in dynamically allocated memory
	*/

	for(i=0 ; i < 5 ;  i++)
	{
		printf("Enter %d index value : ",i);
		scanf("%d",&iptr[i]);
	}

	/*
	Print the values stored in dynamically allocated array
	*/

	for(i = 0 ; i < size ; i++)
	{
		printf("iptr[%d]  :  %d \n",i,iptr[i]);
	}

	free(iptr); // release allocated heap memory to avoid memory leaks
	iptr = NULL; // Set pointer to NULL after freeing memory to avoid dangling pointer issues

	return 0;
}