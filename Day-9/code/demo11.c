#include<stdio.h>

int main()
{
	int num1=10;   // normal integer variable
	int num2=20;   // another integer variable

	// constant pointer to constant data
	const int *const ptr = &num1;

	/*
	Meaning of: const int *const ptr

	ptr   → constant pointer
	*ptr  → constant data

	So both are constant.

	Explanation:
	-------------
	1. Pointer address cannot be changed.
	2. Data stored at that address cannot be modified using this pointer.

	So:

	ptr = &num2;   → NOT allowed (pointer is constant)

	*ptr = 100;    → NOT allowed (data is constant)
	*/

	ptr = &num2 ; // Error → cannot change pointer address
	*ptr = 100;   // Error → cannot modify data through pointer

	printf(" *ptr : %d \n,  num1 :%d \n ", *ptr, num1);
	// prints value pointed by ptr and value of num1

	return 0;
}