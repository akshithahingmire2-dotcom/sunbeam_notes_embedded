#include<stdio.h>

// LABEL: error   
// Labels cannot be declared outside functions.
// Labels must always be inside a function body.

int main()
{
	int num1 = 10;   // Variable declared inside function scope

	LABEL :   

		// int num1 = 10;  // Error : After label, we cannot declare variables.

		printf("Sunbeam..\n");
		printf("Num1 : %d \n",num1);

		goto LABEL;   
		// Infinite loop:
		// Control jumps back to LABEL repeatedly.
		// Program will never terminate normally.

	LABEL  : printf("PGCP-ESD \n"); // Error : Duplicate label name is not allowed.
	

	return 0;
}