#include<stdio.h>

// Function declarations (prototypes)
int sum(int a,int b);
int sub(int a, int b);


int main()
{
	// Function pointer declaration
	// fun_ptr can store address of a function
	// which takes two integers as parameters
	// and returns an integer

	int (*fun_ptr)(int,int) ;

	// Assign address of sum function to pointer
	fun_ptr = sum;

	// Call sum function using function pointer
	int res = fun_ptr(10,20);

	// Print result of sum
	printf("sum : %d \n",res);


	// Now assign address of sub function to same pointer
	fun_ptr = sub;

	// Call sub function using function pointer
	res = fun_ptr(10,20);

	// Print result of subtraction
	printf("sub : %d \n",res);

	return 0;
}

// Definition of sub function
// Returns difference of two numbers
int sub(int a, int b)
{
	return a - b ;
}

// Definition of sum function
// Returns addition of two numbers
int sum(int a, int b)
{
	return a + b ;
}