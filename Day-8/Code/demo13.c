#include<stdio.h>
#include<string.h>
/*
	strrev()
	- Used to reverse a string.
	Prototype:
		char *strrev(char *str);
	Return Value:
		Returns pointer to reversed string.
*/

// User-defined implementation of strrev()
char *my_strrev(char *str)
{
	int i, j;

	// Find length of string
	for(i = 0; str[i] != '\0'; i++);
	i--; // move back to last character index

	// Reverse the string by swapping characters
	for(j = 0; j < i; j++, i--)
	{
		char temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}

	return str; // return base address of reversed string
}

int main()
{
	char str1[20] = "Sunbeam";

	// Calling library function strrev()
	strrev(str1);
	printf("Reversed string (library) : %s \n", str1);

	char str2[20] = "Infotech";

	// Calling user-defined function my_strrev()
	my_strrev(str2);
	printf("Reversed string (user-defined) : %s \n", str2);

	return 0;
}