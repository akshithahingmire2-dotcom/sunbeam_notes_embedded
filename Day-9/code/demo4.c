#include<stdio.h>

/*
	pointer array to string
		- An array that stores addresses of strings is called pointer array to string.
		- Each element of the pointer array stores the base address of a string.
		- We can access the strings through the pointer array using index.
*/


int main()
{
	char str1[] = "DESD";  // character array (string) stored in memory
	char str2[] = "DAC";   // another string
	char str3[] = "DBDA";  // another string

//	printf("str1 : %s \n",str1); // prints the string "DESD"

	/*
		Array of Pointers to Character

		arr is an array that stores addresses of strings.
		Each element of arr stores the base address of a string.

		arr[0] → address of str1
		arr[1] → address of str2
		arr[2] → address of str3
	*/

	char *arr[3] = { str1 , str2 , str3 };
	//                0      1      2    -> index
	//               700    704    708   -> example addresses stored in arr


	/*
		arr[0] : stores address of str1 (DESD)
		arr[1] : stores address of str2 (DAC)
		arr[2] : stores address of str3 (DBDA)
	*/

	// %s format specifier is used to print string stored at the address
	// when we print arr[0], it prints the string at the address stored in arr[0], which is "DESD"
	// when we print arr[1], it prints the string at the address stored in arr[1], which is "DAC"
	// when we print arr[2], it prints the string at the address stored in arr[2], which is "DBDA"

	//---------------------------------------------------------------------
	// Accessing strings through pointer array

	// arr[0] contains base address of str1
	printf("arr[0] : %s \n", arr[0]); // prints DESD
	printf("arr[1] : %s \n", arr[1]); // prints DAC
	printf("arr[2] : %s \n", arr[2]); // prints DBDA

	// Printing all strings using loop
	for(int i=0 ; i<3 ; i++)
	{
		printf("arr[%d] : %s \n",i,arr[i]);
	}
	//---------------------------------------------------------------------

	// Printing addresses stored inside the pointer array

	printf("arr[0] : %lu \n",arr[0]);// base address of str1
	printf("arr[1] : %lu \n",arr[1]);// base address of str2
	printf("arr[2] : %lu \n",arr[2]);// base address of str3

	// arr itself stores addresses of strings, not characters
	// each element is of type: char *

	//----------------------------------------------------------------------

	return 0;
}