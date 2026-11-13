#include<stdio.h>

// Write a program to read a file string by string and display it on screen
/*

	fgets() is used to read a string from a file.
	syntax:
	char *fgets(char *str, int size, FILE *stream);
	Parameters:
		str    → pointer to the buffer where the string will be stored
		size   → maximum number of characters to read (including the null terminator)
		stream → file pointer to the file from which the string will be read
	Return Value:
		Returns a pointer to the buffer on success, or NULL on end of file or error.		
*/
int main()
{
	// Read the String from file2.txt
	FILE *fp1 = fopen("file2.txt","r");
	if(fp1 == NULL)
	{
		printf("Error..\n");
		return 0;
	}
	//------------------------------------------

	char buff[20];
	while (   (fgets( buff , sizeof(buff) ,fp1 ))  != NULL    )
	{
		printf("%s ",buff);
	}


	//-------------------------------------------
	//fclose file
	fclose(fp1);

	return 0;
}
