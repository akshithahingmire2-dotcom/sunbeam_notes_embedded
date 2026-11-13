#include<stdio.h>
/*
	-------------------------------
	       FILE HANDLING IN C
	-------------------------------

	File handling allows a program to store data permanently
	on disk and retrieve it later.

	A file is a collection of related data stored on disk
	with a specific name.

	Common file operations:
		• Creating a file
		• Opening a file
		• Reading from a file
		• Writing to a file
		• Closing a file


	Important File Functions
	------------------------
	1. fopen()   → Opens or creates a file
	2. fclose()  → Closes an opened file
	3. fgetc()   → Reads one character from file
	4. fputc()   → Writes one character to file
	5. fgets()   → Reads a string (line) from file
	6. fputs()   → Writes a string (line) to file
	7. fprintf() → Writes formatted data to file
	8. fscanf()  → Reads formatted data from file


	File Opening Modes
	------------------
	1. "r"   → open for reading (file must exist)
	2. "w"   → open for writing (creates file if not present,
	           deletes previous content if file exists)
	3. "a"   → open for appending (writes at end of file)

	4. "r+"  → open for reading and writing (file must exist)
	5. "w+"  → open for reading and writing (creates new file,
	           previous content deleted)
	6. "a+"  → open for reading and appending

	Binary Modes
	------------
	7.  "rb"   → open for reading in binary mode
	8.  "wb"   → open for writing in binary mode
	9.  "ab"   → open for appending in binary mode

	10. "rb+"  → open for reading and writing in binary mode
	11. "wb+"  → open for reading and writing in binary mode
	12. "ab+"  → open for reading and appending in binary mode
*/

// Write a program to create a file and write some data in it using fputc() function

// fputc() is used to write a single character to a file.
// syntax:
// int fputc(int char, FILE *stream);
// Parameters:
// 1. char   → the character to be written (passed as an int, but only the lower 8 bits are used)
// 2. stream → file pointer to the file where the character will be written
// Return Value:
// Returns the character written as an unsigned char cast to an int, or EOF on error.

int main()
{

	FILE *fp1;  
	// File pointer used to access the file

	fp1 = fopen("file1.txt","w");
	// Open file "file1.txt" in write mode
	// If file does not exist → it will be created
	// If file exists → old content will be deleted

	if(fp1 == NULL)
	{
		printf("Filed not opened....");
		return 0;  // terminate program if file not opened
	}
	//---------------------------------------------------------------------------
	char str[] = "Hum Jeet Gaye....";
	// String that will be written into the file
	
	// Write string into file character by character
	for(int i = 0 ; str[i] != '\0' ; i++)
	{
		fputc(str[i] , fp1);  
		// fputc() writes one character into the file
	}

	printf("Data added in file..\n");
	// Message displayed after writing data

	//-----------------------------------------------------------------------------
	// close the file..
	fclose(fp1);
	// Always close the file after completing file operations


	return 0;
}
