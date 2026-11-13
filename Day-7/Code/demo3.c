#include<stdio.h>

/*
	Pointer
		- is a variable which stores address of another variable

		- addresses are always unsigned integers
		- type of pointer variable will be same as type of targeted variable
		- eg int num = 10;
				- pointer should be of type intger pointer
		- syntax:
			<data type> *<name of variable>;

		- eg int *ptr = &num;
		
		- two operators are always used with pointers
			- & : address of / reference operator
				- to get address of variable
				- eg. &num - will give you address of num

			- * : value at / de reference operator
				- to get the value of targeted variable
				- eg. *ptr - will give value of num
	

*/

int main()
{
	int num = 10 ; 
	/*
		Assume:
			&num = 100  (example address)
			num  = 10
	*/

	// int *ptr = &num;  // Direct initialization

	int *ptr;    
	/*
		ptr is a pointer variable.
		Assume:
			&ptr = 200
			ptr  = garbage (uninitialized)
	*/

	ptr = &num;   
	/*
		Now:
			ptr  = 100   (address of num)
			*ptr = 10    (value at address 100)
	*/

	printf("num = %d &num = %lu \n", num, &num);

	printf("*ptr = %d  ptr = %lu  &ptr = %lu \n",*ptr,ptr, &ptr);
			//    *ptr,    Dereference → 10
			//    ptr,     Address of num → 100
			//    &ptr   Address of pointer → 200


	/*
		Modify value using pointer
	*/
	*ptr = 30;
	/*
		This changes the value stored at address 100.
		So num becomes 30.
	*/

	printf("num = %d &num = %lu \n", num, &num);
	// num = 30

	printf("*ptr = %d  ptr = %lu  &ptr = %lu \n", *ptr,  ptr,  &ptr);
	    //    *ptr    30
	    //    ptr,    100 (same address)
	    //    &ptr    200 (same address of pointer)

	return 0;
}
