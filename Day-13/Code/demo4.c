#include<stdio.h>

// Generic SWAP macro
// Parameters:
// n1   -> first variable
// n2   -> second variable
// type -> datatype of variables
//
// Macro logic:
// 1. Create temporary variable of given type
// 2. Store n1 into temp
// 3. Assign n2 to n1
// 4. Assign temp to n2
//
// This allows swapping variables of different datatypes
//
// Example expansion:
// SWAP(a,b,int)
// becomes
// { int temp = a ; a = b ; b = temp ; }

#define SWAP(n1,n2,type) { type temp = n1 ; n1 = n2 ; n2 = temp ;}

int main()
{

	// Character variables
	char ch1='A',ch2='B';

	// Print values before swap
	printf("Before swap :ch1 : %c  ch2 : %c \n",ch1,ch2);

	// Swap characters using macro
	SWAP(ch1,ch2,char);
	//Replaces with:
	// { char temp = ch1 ; ch1 = ch2 ; ch2 = temp ; }

	// Print values after swap
	printf("After swap :ch1 : %c  ch2 : %c \n",ch1,ch2);



	// Integer variables
	int a=10 , b = 20;

	// Print values before swap
	printf("Before swap :a : %d  b : %d \n",a,b);

	// Swap integers using same macro
	// Here datatype passed is int
	SWAP(a  , b, int );
	// Replaces with:
	// { int temp = a ; a = b ; b = temp ; }

	// Print values after swap
	printf("After swap :a : %d  b : %d \n",a,b);

	return 0;  
}