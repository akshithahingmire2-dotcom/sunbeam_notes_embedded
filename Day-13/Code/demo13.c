#include<stdio.h>

/*
	Typedef for Function Pointer

	- typedef is used to create an alias (new name) for an existing datatype.
	- Here we create an alias for a function pointer type.
	- This improves readability and avoids writing complex declarations repeatedly.

	Syntax:
		typedef return_type (*alias_name)(parameter_types);

	Example:
		typedef int (*fun_ptr)(int,int);

	Meaning:
		fun_ptr → pointer to a function
		function → takes two integers as parameters
		return type → int
*/

int sum(int a,int b);
int sub(int a, int b);

int main()
{
	// Function pointer declaration using typedef

	// Creating alias for function pointer
	typedef int (*fun_ptr)(int,int);

	// Array of function pointers using typedef alias
	// Each element can store address of function
	// having signature: int function(int,int)
	fun_ptr arr[4];

	// psum is a function pointer pointing to sum()
	fun_ptr psum = sum;

	// Calling sum function through function pointer
	printf("psum : %d \n", psum(10,20) );
}


// Function definition for subtraction
int sub(int a, int b)
{
	return a - b ;
}

// Function definition for addition
int sum(int a, int b)
{
	return a + b ;
}