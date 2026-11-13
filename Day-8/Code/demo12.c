#include<stdio.h>
#include<string.h>

/*
	strcmp()

	- Used to compare two strings (case-sensitive comparison)

	Prototype:
		int strcmp(const char *str1, const char *str2);

	Return Value:
		0   → both strings are equal
		>0  → first string is greater
		<0  → second string is greater

	Comparison is done character by character using ASCII values.

	Example:

	str1 →  A   B   X  \0
	        65  66  88  0
	        0   1   2   3   (index)

	str2 →  A   B   X  \0
	        65  66  88  0
	        0   1   2   3
*/

/*
	stricmp()

	- Used to compare two strings without case sensitivity
	- Uppercase and lowercase letters are treated as same

	Example:
		"A" == "a"

	Return Value:
		0   → both strings are equal
		>0  → first string is greater
		<0  → second string is greater

	Prototype:
		int stricmp(const char *str1, const char *str2);
*/


//---------------------------------------------------------------
// User-defined implementation of case-insensitive strcmp (stricmp)

int my_strcmpi(char *str1, char *str2)
{
	int i;

	for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
	{
		int diff = str1[i] - str2[i];

		/*
			ASCII difference between uppercase and lowercase
			letters is 32.

			Example:
				'A' = 65
				'a' = 97
				diff = 32
		*/

		if(!(diff == 0 || diff == 32 || diff == -32))
			return diff;
	}

	return 0;
}

//---------------------------------------------------------------
// User-defined implementation of strcmp (case-sensitive)

int my_strcmp(char *str1, char *str2)
{
	int i;

	for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
	{
		int diff = str1[i] - str2[i];

		// If characters are different return difference
		if(diff != 0)
			return diff;
	}

	return 0;
}

//---------------------------------------------------------------

int main()
{
	//----------------------------------------------------------------
	// Example 1 : Using user-defined case-insensitive compare

	char str4[10] = "ABC";
	char str3[10] = "ABC";

	int ret = my_strcmpi(str4, str3);

	printf("ret = %d \n", ret);

	if(ret == 0)
		printf("Both string are same \n");
	else
		printf("String not matching..\n");

	//----------------------------------------------------------------
	// Example 2 : Using library strcmp()

	char str1[10] = "SUNBEAM";
	char str2[10] = "UUNBEAM";

	//calling library function strcmp()
	int ret = strcmp(str1, str2);

	//calling user-defined function my_strcmp()
	//int ret1 = my_strcmp(str1, str2);

	printf("ret = %d \n", ret);

	if(ret == 0)
		printf("Both string are same \n");
	else
		printf("String not matching..\n");

	//----------------------------------------------------------------

	return 0;
}