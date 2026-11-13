#include<stdio.h>

int main()
{
	// ------------------------------
	// Wild Pointer
	// ------------------------------
	
	/*
	Explanation:
		A wild pointer is a pointer that has not been initialized.
		It contains a random (garbage) address.

		Dereferencing a wild pointer causes:
			→ Undefined behavior
			→ Crash / Segmentation fault
	*/

	/*
	int *ptr;   // Uninitialized pointer
	           // ptr = garbage value
	           // &ptr = some stack address (example 100)

	printf("*ptr : %d  ptr: %lu  &ptr : %lu \n", *ptr, ptr, &ptr);

	*ptr = 10;   // Dangerous
	printf("*ptr : %d \n", *ptr);
	printf("hello..\n");
	*/



	// ------------------------------
	// NULL Pointer
	// ------------------------------

	int *iptr = NULL;	

	/*
		NULL pointer:
			- Points to nothing
			- Value = 0
			- Safe to initialize pointer with NULL
	*/

	printf("iptr : %d \n", iptr);  // Prints 0 (or (nil) depending on system)

	*iptr = 30;   // Runtime Error
	             // Dereferencing NULL pointer

	printf("*iptr : %d \n", *iptr);  // Segmentation Fault

	printf("hello..\n");  // Will not execute

	return 0;
}