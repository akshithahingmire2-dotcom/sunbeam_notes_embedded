#include<stdio.h>

/*
    register Storage Class

    Keyword        : register
    Memory         : CPU register (if available)
    Initial value  : Garbage (if not initialized)
    Scope          : Block
    Life           : Block

    Important Points:
        - register is only a request to compiler.
        - Compiler may ignore the request.
        - Address-of operator (&) cannot be used
          on register variable.
*/


// Global scope

// register int num3;  //ERROR:
// register storage class cannot be applied to global variables.
// It is allowed only for local (block-level) variables.


int main()
{
    /*
    register int num1;   // Request memory in CPU register

    printf("num1 : %d \n",num1);   // Garbage value

    printf("&num1:  %lu \n",&num1); // ERROR:
    // Address-of operator (&) cannot be used
    // because register variable may not have memory address.
    */


    int num1 = 10;

    register int num2 = num1; // allow initialization of register variable

    /*
        Here we request compiler to allocate
        num2 in CPU register.

        If request approved:
            → Stored in CPU register (faster access)

        If request declined:
            → Stored in stack memory

        Programmer cannot guarantee
        whether it is actually stored in register.
    */

    printf("num2 : %d \n",num2);   // Output: 10

	//-------------------------------------------------------------------------
	//scope demonstration
	register int num3 = 20; // register variable with block scope
	{
		// New block scope
		register int num3 = 30; // Allowed (different block scope)
		register int num4 = 40;

		printf("num3 : %d \n", num3);  // Prints 30 (inner block variable)
		printf("num4 : %d \n", num4);  // Prints 40
	}
	printf("num3 : %d \n", num3);  // Prints 30 (inner block variable)
	//printf("num4 : %d \n", num4);  // Error: num4 is not accessible outside inner block
    return 0;
}