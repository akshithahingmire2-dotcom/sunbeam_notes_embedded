#include<stdio.h>

/*
	Preprocessor directives 
	   - They are instructions to the preprocessor, which is a part of the compilation process.
	   - They are executed before the actual compilation of code begins.
	   - They are used to include header files, define constants, and create macros.
	   - They start with a '#' symbol and are followed by the directive name and its arguments.	
	- Common preprocessor directives include:
		1. #include: Used to include header files in the program.
		2. #define: Used to define constants or macros.
		3. #ifdef, #ifndef, #endif: Used for conditional compilation.
		4. #undef: Used to undefine a macro.
		5. #error: Used to generate a compilation error with a custom message.
		6. #pragma: Used to provide special instructions to the compiler.


*/
#define PI 3.142

int main()
{

	// PI = 6.1452; 
	// Error: Macro constants cannot be modified because they are replaced
	// directly by the preprocessor before compilation.

	// 3.142 = 6.1452 ;
	// Error: After macro substitution it becomes an invalid assignment.

	// printf("PI : %.2f\n",PI);
	// If this line is used, PI will be replaced by 3.142 in preprocessing.

	// Calculate area of circle using formula
	// Area = PI * r * r

	int rad;   // variable to store radius

	printf("Enter the radious : ");
	scanf("%d",&rad);   // user enters radius value

	// PI will be replaced by 3.142 in the .i (preprocessed) file
	float res = PI * rad * rad ;
	// After preprocessing this line becomes:
	// res = 3.142 * rad * rad;

	printf("Res : %.2f \n",res);  // prints calculated area

	return 0;   
}