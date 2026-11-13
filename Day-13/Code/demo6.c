#include<stdio.h>

// #  Stringizing operator
// Converts macro argument into string literal

// Example:
// PRINT(num)
// expands to
// printf("num" "= %d \n", num)
// which becomes
// printf("num = %d \n", num)

#define PRINT(var) printf(#var "= %d \n",var)
//                        "num""= %d \n",num
// Adjacent strings automatically concatenate in C


// ## Token pasting operator
// Combines two tokens to form a new token

// Example:
// CONCAT(a,b)
// becomes
// ab

#define CONCAT(var1,var2)  var1##var2
//               a    b       a##b


int main()
{

	int num = 10;

	// Normal printing
	printf("num = %d ",num);

	// Using macro with stringizing operator
	
	// PRINT(num) becomes: printf("num = %d \n",num);
	PRINT(num);

	//-------------------------------------------------------------------
	// Using token pasting operator to create new variable name
	int  a=10 ,  b=20, ab=200;

	// CONCAT(a,b) → ab
	// If uncommented it becomes:
	// int res = ab;

	//int res = CONCAT(a,b);
	//        ab
	//PRINT(res);


	// Here CONCAT(a,b) becomes ab
	// So statement becomes:
	// PRINT(ab);
	// which expands to:
	// printf("ab = %d \n", ab);
	PRINT(CONCAT(a,b));

	return 0;
}