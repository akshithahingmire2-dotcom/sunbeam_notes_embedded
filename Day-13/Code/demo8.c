#include<stdio.h>

/*
	Conditional compilation using #ifdef and #ifndef

	- These directives allow compiling specific blocks of code based on whether a macro is defined or not.
	- #ifdef checks if a macro is defined, and if so, compiles the following block of code.
	- #ifndef checks if a macro is NOT defined, and if so, compiles the following block of code.

	- Also use as a headers guard to prevent multiple inclusions of the same header file.
*/

// Macro definition
// VER is defined with value 1
#define VER 1

int main()
{
	// #ifdef checks whether a macro is defined or not
	// If VER is defined, the following block will be compiled

	#ifdef VER
		printf("Exicute version 1 \n");
		//--------
	#endif

	// #ifndef checks whether a macro is NOT defined
	// If VER is not defined, the following block will be compiled

	#ifndef VER
		printf("Version is Not specifief..\n");
	#endif

	return 0;
}