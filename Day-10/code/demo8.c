#include<stdio.h>
#include<stdlib.h>

/*
 memory_leak
	- A memory leak occurs when a program allocates memory on the heap but fails to free it after use.
 dangling_pointer
	- A dangling pointer is a pointer that points to a memory location that has been deallocated
	- Accessing a dangling pointer can lead to undefined behavior, including crashes and data corruption.
 Valgrind
	- is a powerful tool for detecting memory leaks and memory errors in C/C++ programs.
	- It can help identify issues such as:
		- Memory leaks:
			- When allocated memory is not freed, leading to increased memory usage over time.
		- Use of uninitialized memory:
			- Accessing memory that has not been initialized, which can lead to unpredictable behavior.
	checking for memory leaks using Valgrind:
	  cmd : $ valgrind ./program.out

	*/  


int main()
{
	int size;
	printf("Enter Size : ");
	scanf("%d",&size); // 5 , 10 

	int *ptr = (int *)malloc( sizeof(int) * size ); // OK
	if( ptr == NULL )
	{
		printf("Malloc() failed..Memory not alloacated..\n");
		return 0; // Exit main function / Terminate code
	}
	//-------------------------------------------------------------------------
	//case1 : memory leak
	
	int num=10;
	ptr = &num; 
	// ptr now points to num, but the previously allocated memory is not freed, leading to memory leak

	//-----------------------------------------------------------------------------

	//case2 : dangling pointer 
	// If we not free the allocated memory after user then it knowm memory leakage
	free(ptr); // no memory leakage
	//if we not set ptr to NULL after free then it is known as dangling pointer
	ptr = NULL ;// Now ptr is not a dangling pointer
	//-----------------------------------------------------------------------------

	return 0;
}


