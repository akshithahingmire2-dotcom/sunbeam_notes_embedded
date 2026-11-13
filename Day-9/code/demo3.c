#include<stdio.h>
#include<string.h>


/*
	strtok()

	Purpose:
	----------
	strtok() is used to split a string into tokens based on a specified delimiter.

	Prototype:
	----------
	char *strtok(char *str, const char *delim);

	Parameters:
	----------
	str : Pointer to the null-terminated string to be tokenized. 
	      For the first call, it should point to the original string. 
	      For subsequent calls, it should be NULL to continue tokenizing the same string.
	delim : Pointer to a null-terminated string containing delimiter characters.

	Return Value:
	----------
	If a token is found → pointer to the token
	If no more tokens are available → NULL

	Note:
	strtok() modifies the original string by replacing delimiters with '\0' to terminate tokens.


*/



/*
Example String
--------------
DAC,DMC,DESD,DITISS,DBDA

Delimiter
---------
','  (comma)

Tokens generated
----------------
DAC
DMC
DESD
DITISS
DBDA
*/

int main()
{
	char str1[] = "DAC,DMC,DESD,DITISS,DBDA"; 
	// string stored in memory
	// strtok() will modify this string internally

	char delim = ','; // delimiter character used to split the string

	// First call to strtok()
	// Pass the original string
	// strtok() finds first token until delimiter ','
	char *ptr = strtok( str1 ,&delim);

	printf("ptr : %s \n",ptr); // prints first token -> DAC

	// After first call, memory internally becomes
	// "DAC\0DMC,DESD,DITISS,DBDA"

	// Next calls must pass NULL as first argument
	// strtok() continues searching from previous position
	ptr = strtok(NULL, &delim);

	// memory becomes
	// "DAC\0DMC\0DESD,DITISS,DBDA"

	printf("ptr : %s \n",ptr); // prints second token -> DMC


	ptr = strtok(NULL, &delim);

	// memory becomes
	// "DAC\0DMC\0DESD\0DITISS,DBDA"

	printf("ptr : %s \n",ptr); // prints third token -> DESD
	

	ptr = strtok(NULL, &delim);

	// memory becomes
	// "DAC\0DMC\0DESD\0DITISS\0DBDA"

	printf("ptr : %s \n",ptr); // prints fourth token -> DITISS


	ptr = strtok(NULL, &delim);

	printf("ptr : %s \n",ptr); // prints fifth token -> DBDA


	ptr = strtok(NULL, &delim);

	// No more tokens available
	// strtok() returns NULL
	printf("ptr : %s \n",ptr); // NULL

	// Note:
	// Original string has been modified because strtok()
	// replaces delimiters with '\0'

	return 0;
}