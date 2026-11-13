#include<stdio.h>
#include<string.h>

/*
	strcpy()

	- Used to copy one string into another string.
	- Copies characters from source string to destination string
	  including the terminating null character '\0'.

	Prototype:
		char *strcpy(char *dest, const char *src);

	Return Value:
		Returns pointer to destination string.

	Important:
		Destination array must have enough memory
		to store the copied string.
*/


//---------------------------------------------------------------
// User-defined implementation of strcpy()

char *my_strcpy(char *dest, const char *src)
{
	int i;

	/*
		Copy characters from source to destination
		until null character '\0' is found
	*/
	for(i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];

	/*
		Add null terminator at the end of destination string
	*/
	dest[i] = '\0';

	return dest;   // return base address of destination string
}

//---------------------------------------------------------------

int main()
{
	char str1[20] = "Sunbeam";   // Source string

	char str2[20];               // Destination string

	//Calling library function strcpy()
	// Copy str1 into str2 using library function
	strcpy(str2 , str1);
	/*
		After copy:
		str2 = "Sunbeam"
	*/

	//Calling user-defined function my_strcpy()
	//my_strcpy(str2, str1);  // Copy str1 into str2 using user-defined function
	
	printf("str2 : %s \n",str2);
	
	return 0;
}