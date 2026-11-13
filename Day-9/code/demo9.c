#include<stdio.h>

int main()
{
	int num1=10;  // normal integer variable
	int num2=20;  // another integer variable

	// pointer to constant data
	const int *ptr = &num1; // ptr is a pointer that points to an integer which is constant (read-only)

	// or equivalent syntax
	// int const *ptr = num1;

	/*
	Meaning of: const int *ptr

	Data is constant through this pointer
	-------------------------------------
	- We cannot modify the value using *ptr
	- But the pointer can point to another variable

	So:
	    *ptr = 100;  → NOT allowed
	    ptr = &num2; → allowed
	*/

	ptr = &num2 ;   // pointer now points to num2

	//*ptr = 100; // Error → cannot modify data using pointer

	printf(" *ptr : %d \n,  num1 :%d \n ", *ptr, num1);
	// *ptr prints value of variable currently pointed by ptr (num2)
	// num1 prints original value of num1

	return 0;
}