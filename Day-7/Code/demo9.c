#include<stdio.h>

/*
	- Size of pointer
	- Scale factor of pointer
*/

int main()
{
	int n1;
	char ch;
	float f1;
	double d1;

	int *iptr = &n1;
	char *cptr = &ch;
	float *fptr = &f1;
	double *dptr = &d1;
	
	//--------------------------------------------------------------------------------
	/*
		Size of Pointer:

		- Depends on system architecture.
		- NOT dependent on data type it points to.

		32-bit system  → 4 bytes
		64-bit system  → 8 bytes

		All pointers generally have SAME size.
	*/

	printf("Size of iptr => %lu \n", sizeof(iptr)); // 4 or 8
	printf("Size of cptr => %lu \n", sizeof(cptr)); // 4 or 8
	printf("Size of fptr => %lu \n", sizeof(fptr)); // 4 or 8
	printf("Size of dptr => %lu \n", sizeof(dptr)); // 4 or 8

	//--------------------------------------------------------------------------------
	/*
		Scale Factor:

		Scale factor = sizeof(data type)

		It is used in pointer arithmetic.

		When we do:
			ptr + 1

		Address increases by:
			sizeof(data type)
	*/

	printf("Scale Factor of int    => %lu \n", sizeof(int)); // 4  
	printf("Scale Factor of char   => %lu \n", sizeof(char)); // 1
	printf("Scale Factor of float  => %lu \n", sizeof(float)); //4
	printf("Scale Factor of double => %lu \n", sizeof(double)); // 8
	//--------------------------------------------------------------------------------
	

	//Double Pointer
	int **pptr = &iptr;
	printf("Size of pptr       => %lu \n", sizeof(pptr));

	/*
		Important:
		sizeof(pptr) → also size of pointer (4 or 8)
		Even double pointer size is same as normal pointer.
	*/

	return 0;
}