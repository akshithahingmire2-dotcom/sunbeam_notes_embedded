#include<stdio.h>

int main()
{
	int num1=10;   // normal integer variable
	int num2=20;   // another integer variable

	// constant pointer to integer
	int *const ptr = &num1;

	/*
	Meaning of: int *const ptr

	ptr → constant pointer
	*ptr → data stored at address

	Address is constant
	Data is NOT constant

	Explanation:
	-------------
	- ptr must always store the same address.
	- We cannot change the address stored in ptr.
	- But we CAN modify the data stored at that address.

	Example:

	ptr = &num2;   → NOT allowed (pointer address cannot change)

	*ptr = 100;    → allowed (data at that address can change)
	*/

	//ptr = &num2 ; // Error → cannot change address because pointer itself is constant

	*ptr = 100; // OK → modifies value stored at address of num1

	printf(" *ptr : %d \n,  num1 :%d \n ", *ptr, num1);
	// *ptr prints value at the memory location pointed by ptr
	// num1 also prints same value because ptr points to num1

	return 0;
}