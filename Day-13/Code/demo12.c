#include<stdio.h>

// Function declarations (prototypes)
int sum(int a,int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a,int b);

int main()
{
	// Function pointer array declaration
	// fun_ptr is an array of 4 function pointers
	// Each pointer points to a function that:
	//    - takes two integers as parameters
	//    - returns an integer

	// Alternative initialization (commented)
	// int (*fun_ptr[4])(int,int)  = { sum , sub , div , mul };

	int (*fun_ptr[4])(int,int) ;

	// Assign addresses of functions to array elements
	fun_ptr[0] = sum;   // pointer to sum function
	fun_ptr[1] = sub;   // pointer to sub function
	fun_ptr[2] = div;   // pointer to div function
	fun_ptr[3] = mul;   // pointer to mul function

	// Calling functions using function pointer array

	// fun_ptr[0] → sum()
	printf("sum : %d \n",fun_ptr[0](10,20)  );

	// fun_ptr[1] → sub()
	printf("sub : %d \n",fun_ptr[1](10,20)  );

	// fun_ptr[2] → div()
	printf("div : %d \n",fun_ptr[2](10,20)  );	

	// fun_ptr[3] → mul()
	printf("mul : %d \n",fun_ptr[3](10,20)  );	

	return 0;
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

// Function definition for division
int div(int a, int b)
{
	return a / b ;
}

// Function definition for multiplication
int mul(int a, int b)
{
	return a * b ;
}