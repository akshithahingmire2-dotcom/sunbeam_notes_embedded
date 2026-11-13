#include<stdio.h>


// Write a program to read a file character by character and display it on screen
// We will use fgetc() function to read character from file
/*
	fgetc() is used to read a single character from a file.
	syntax:
	int fgetc(FILE *stream);
	Parameters:
		stream → file pointer to the file from which character will be read
	Return Value:
		Returns the character read as an unsigned char cast to an int, or EOF on end of file or error.

*/

int main()
{

	FILE *fp1;   // File pointer used to access the file

	fp1 = fopen("file1.txt","r");  
	// Opening the file "file1.txt" in read mode

	// If file does not exist or cannot be opened
	if(fp1 == NULL)
	{
		printf("Filed not opened....");
		return 0;  // terminate program
	}
	//-----------------------------------------------------------------------------

	char ch;   // variable to store character read from file

	// Read characters one by one until End Of File (EOF)
	while (   (ch=fgetc(fp1)) != EOF      )	
	{
		printf("%c",ch);   // print character on screen
	}
	//-----------------------------------------------------------------------------
	// Close the file after finishing operations
	fclose(fp1);

	return 0;
}