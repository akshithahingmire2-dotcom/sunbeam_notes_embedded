#include<stdio.h>
#include<string.h>

/*
	strcat()

	- Used to concatenate (join) two strings.
	- Appends source string at the end of destination string.

	Prototype:
		char *strcat(char *dest, const char *src);

	Return Value:
		Returns pointer to destination string.

	Important:
		Destination array must have enough memory
		to hold the concatenated string.
*/


//---------------------------------------------------------------
// User defined implementation of strcat()

char *my_strcat(char *dest, const char *src)
{
	int i, j;

	/*
		Move index i to the end of destination string
	*/
	for(i = 0; dest[i] != '\0'; i++);

	/*
		Copy characters of src to end of dest
	*/
	for(j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	/*
		Add null character at end
	*/
	dest[i + j] = '\0';

	return dest;
}

//---------------------------------------------------------------

int main()
{
	char str1[20] = "Sunbeam";
	char str3[] = "_Infotech";


	//Calling library function strcat()
	strcat(str1, str3);
	/*
		After concatenation:
		str1 = "Sunbeam_Infotech"
	*/

	//calling user defined function my_strcat()
	//my_strcat(str1, str3);   

	printf("str1 : %s \n", str1);

	return 0;
}