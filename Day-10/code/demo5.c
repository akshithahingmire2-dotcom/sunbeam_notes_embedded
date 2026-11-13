#include<stdio.h>
#include<stdlib.h>

/*
	calloc()
	-------
	- Used to allocate memory dynamically on heap.
	- It also initializes all allocated memory with 0.

	Syntax:
	void *calloc(size_t nmemb, size_t size)

	Arguments:
	nmemb → number of memory blocks
	size  → size of each block

	Total allocated memory = nmemb * size bytes

	Example:
	char *ptr = (char *)calloc(10 , sizeof(char));
*/

//
// Allocate memory for user-given number of characters on heap using calloc
//

int main()
{
	int size;

	printf("enter the size : ");
	scanf("%d",&size); // example: 10

	/*
	Allocate memory for 'size' characters.

	sizeof(char) = 1 byte

	So total memory allocated = size * 1 byte
	*/

	//                                 1 byte        number of blocks
	char *cptr = (char *)calloc( sizeof(char) , size);

	// check if calloc failed
	if( cptr == NULL  )
	{
		printf("calloc gets failed..\n");
		return 0;
	}

	/*
	Print initial values stored in allocated memory.

	calloc() initializes memory with 0.
	*/

	int i;

	for(i = 0; i < size ; i++)
	{
		printf("%d ",cptr[i]); // initial values will be 0
	}
	printf("\n");

	/*
	Accept string from user and store it in dynamically allocated memory
	*/

	printf("Enter the string : ");

	// %*c is used to ignore leftover newline character from previous scanf
	scanf("%*c%s",cptr);

	printf("cptr : %s",cptr); // print accepted string

	free(cptr); // release allocated memory to avoid memory leaks
	cptr = NULL; // Set pointer to NULL after freeing memory to avoid dangling pointer issues

	return 0;
}