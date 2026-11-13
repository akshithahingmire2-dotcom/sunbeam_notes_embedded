#include<stdio.h>

/*
	void → represents "no type"

	void *ptr → Generic Pointer

	Properties of void pointer:
	----------------------------
	1. It can store the address of any data type.
	2. It does not have its own data type.
	3. It does not know the size of the data it points to.
	4. Therefore it has no scale factor.
	5. Before dereferencing it, we must perform explicit type casting.

	Syntax Example:
	void *ptr;
*/

int main()
{
	int n1=10;     // integer variable
	char ch = 'X'; // character variable
	float f1 = 3.14; // float variable
	double d1= 5.25; // double variable

	// storing addresses of different data types in void pointers
	void *vptr1  = &n1; // address of int
	void *vptr2 = &ch;  // address of char
	void *vptr3 = &f1;  // address of float
	void *vptr4 = &d1;  // address of double

	/*
	We cannot dereference a void pointer directly
	because the compiler does not know the data type.

	So explicit type casting is required.
	*/

	//printf("n1 : %d , *vptr1 : %d \n", n1 ,  *vptr1    ); // invalid → cannot dereference void pointer

	printf("n1 : %d , *vptr1 : %d \n", n1 ,  *(int *)vptr1 );
	// cast void pointer to int pointer before dereferencing

	printf("ch : %c , *vptr2 : %c \n", ch ,  *(char *)vptr2 );
	// cast to char pointer

	printf("f1 : %.2f , *vptr3 : %.2f \n", f1 ,  *(float *)vptr3 );
	// cast to float pointer

	printf("d1 : %lf , *vptr4 : %lf \n", d1 ,  *(double *)vptr4 );
	// cast to double pointer

	return 0;
}