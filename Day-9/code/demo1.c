#include<stdio.h>
#include<string.h>

/*
    strchr()

    Purpose:
    ----------
    strchr() is used to find the FIRST occurrence of a character in a string.

    If the character is found:
        → It returns the address (pointer) of that character inside the string.

    If the character is NOT found:
        → It returns NULL.

    Prototype:
    ----------
    char *strchr(const char *str, int c);

    Parameters:
    ----------
    str : Pointer to the null-terminated string to be searched.
    c   : Character to be searched inside the string.

    Return Value:
    ----------
    If character is found → pointer to first occurrence
    If character not found → NULL
*/

//--------------------------------------------------------------------------------
int main()
{
	char  str1[] = "India"; 
	// string stored as: I n d i a \0
	//                    0 1 2 3 4

	// str1 is a character array stored in stack memory

	char ch = 'i'; // character to search
	char ch = 'p'; // redeclaration of same variable (will cause compilation error)

	// strchr() searches for first occurrence of character 'ch' in string str1
	char *ptr = strchr(str1,ch);// returns address of first matching character

	//char *ptr = my_strchr(str1,ch);//call user defined function to search character

	printf("str1 : %s \n",str1); 
	// prints the complete string

	printf("str1 : %lu \n",str1);
	// prints base address of the string (address of first character)

	printf("ptr : %lu \n",ptr);
	// prints address where the character is found
	// if character not found → ptr will be NULL

	return 0;
}
//--------------------------------------------------------------------------------
char * my_strchr(const char *str, int c)
{
	for(int i=0; str[i] != '\0'; i++)
	{
		if(str[i] == c)
		{
			return (char *)(str + i); // return address of the character
		}
	}	
	return NULL; // Character not found
}
//--------------------------------------------------------------------------------