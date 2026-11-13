#include<stdio.h>

/*
	Function Pointer

	- A function pointer is a variable that stores the address of a function.
	- Using this pointer, we can call the function indirectly.
	- Function pointers are commonly used in:
		1. Callback functions
		2. Function tables
		3. Dynamic function calls

	Syntax of function pointer declaration:

		return_type (*pointer_name)(parameter_types);

	Example:
		void (*fun_ptr)(void);

	Assignment:
		fun_ptr = fun;   // store address of function 'fun'

	Function call using pointer:
		fun_ptr();       // calls function through pointer
*/


// Normal function definition
void fun(void)
{
	printf("Hello...\n");
}

int main()
{
	// Direct function call
	fun();

	// 1. Function pointer declaration and initialization

	// Pointer that can store address of function
	// having return type void and no parameters

//	void (*fun_ptr)(void)  = &fun;   // address of function assigned
	void (*fun_ptr)(void)  = fun;     // &fun and fun both represent address of function

	// Calling function using function pointer
	fun_ptr();

	return 0;
}