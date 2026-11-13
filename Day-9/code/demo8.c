#include<stdio.h>

/*
	const keyword
	-------------
	- const is used to make a variable read-only.
	- Once initialized, its value should not be modified directly.
	- If we try to modify it normally, the compiler gives an error.

	Syntax:
	const <data_type> variable_name = value;

	Example:
	const int num = 10;

	Important Note:
	const restricts modification through that variable name,
	but the memory may still be modified indirectly using pointers
	(which leads to undefined behavior).
*/

int main()
{
	//const int num1;
	//num1 = 10 ; // Error → const variable must be initialized during declaration

	const int num1 = 10 ;  // read-only variable
	printf("Read num1 : %d \n",num1);

	//num1=20; // compile-time error → assignment to const variable

	// pointer pointing to address of const variable
	int *ptr = &num1;

	// modifying value indirectly through pointer
	// (This compiles but leads to undefined behavior)
	*ptr = 20; // memory location modified

	printf("Read num1 : %d \n",num1);// value may appear changed
	
	return 0;
}