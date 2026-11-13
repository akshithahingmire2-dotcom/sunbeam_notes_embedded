#include<stdio.h>

/*
	Double Pointer

	Definition:
		A pointer that stores the address of another pointer.

	Levels:
		int      → normal variable
		int *    → pointer to int
		int **   → pointer to pointer to int
*/

int main()
{
	int num = 10;
	/*
		Assume:
			&num = 100  (example address)
			num  = 10
	*/

	int *ptr = &num;
	/*
		ptr  = 100  (stores address of num)
		*ptr = 10   (value at address 100)
		&ptr = 200  (example address of ptr)
	*/

	int **pptr = &ptr;
	/*
		pptr   = 200  (stores address of ptr)
		*pptr  = 100  (value at address 200 → address of num)
		**pptr = 10   (value at address 100)
		&pptr  = 300  (example address of pptr)
	*/

	printf("num :  %d , &num : %lu \n", num, &num);

	printf("*ptr : %d  ptr : %lu  &ptr : %lu \n",*ptr,ptr, &ptr);
	    //    *ptr,    value at address of num → 10
	    //    ptr,     address of num → 100
	    //    &ptr     address of pointer variable → 200
		
	printf("**pptr : %d  *pptr : %lu  pptr : %lu  &pptr : %lu \n", **pptr,*pptr,pptr,&pptr);
	    //    **pptr  ->10
	    //    *pptr   ->100
	    //    pptr    ->200
	    //    &pptr)  ->300

	return 0;
}