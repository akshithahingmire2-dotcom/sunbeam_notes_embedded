#include<stdio.h>
#include<stdlib.h>

int main()
{
	// typedef
	// -------
	// typedef is used to create an alias (new name) for an existing data type.
	// It improves readability and portability of code.

	// syntax:
	// typedef <existing_data_type> <new_name / alias>;

	typedef int INTGER ;   // INTGER is an alias for int

	int n1,n2;         // declare variables using existing data type
	INTGER num1,num2;  // declare variables using alias (same as int)

	// Creating aliases for basic data types

	typedef char CHAR;      // CHAR is alias for char
	CHAR ch1,ch2;        // variables of type char

	typedef float FLOAT;    // FLOAT is alias for float
	FLOAT f1,f2;        // variables of type float

	typedef double DOUBLE;  // DOUBLE is alias for double
	DOUBLE d1,d2;       // variables of type double	

	// Alias for unsigned integer types

	typedef unsigned int uint_32;  // commonly used to represent 32-bit unsigned integer
	uint_32 a1,a2;                 // variables of type unsigned int

	typedef unsigned char uint_8;  // commonly used to represent 8-bit unsigned integer
	uint_8 ch1,ch2;

	typedef unsigned short uint_16; // commonly used to represent 16-bit unsigned integer
	uint_16 sh1,sh2;

	/*
	Advantages of typedef:
	----------------------
	1. Improves code readability.
	2. Simplifies complex declarations.
	3. Commonly used in embedded systems and system programming.
	4. Helps create portable code across platforms.
	*/

	return 0;
}