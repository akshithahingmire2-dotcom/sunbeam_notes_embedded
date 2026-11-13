#include<stdio.h>

/*
	Conditional compilation using #if, #elif, #else, #endif

	- These directives allow compiling specific blocks of code based on certain conditions.
	- The condition is evaluated during preprocessing, and only the code that meets the condition is compiled.
	- This is useful for including/excluding code for different versions, platforms, or debugging purposes.
*/

// Macro definition
// VER represents program version
#define VER 1

int main()
{

	// #if is used for conditional compilation
	// It evaluates a constant expression during preprocessing

	// If VER == 1 this block will be compiled
	#if VER == 1
		printf("Version-1 \n");

	// If VER == 2 this block will be compiled
	#elif VER == 2
		printf("Version-2 \n");

	// If VER == 3 this block will be compiled
	#elif VER == 3
		printf("Version-3 \n");

	// If none of the above conditions are true
	#else
		printf("Version not mention..\n");

	#endif   // end of conditional compilation

	return 0;
}