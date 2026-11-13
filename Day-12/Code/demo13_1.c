
#include<stdio.h>

// Write a program to create a file and write given strings in it using fputs() function	
/*
	fputs() is used to write a string to a file.
	syntax:
	int fputs(const char *str, FILE *stream);
	Parameters:
		str    → pointer to the null-terminated string to be written
		stream → file pointer to the file where the string will be written
	Return Value:
		Returns a non-negative value on success, or EOF on error.
*/
int main()
{
	// Write the String in file

	// Array of pointers to string literals
	// Each element stores the address of a string
	char *str[5] = { "India\n" , "NewZeland\n" , "Bangladsh\n", "IRAN\n" , "DUBAI\n" };
	//                  0         1              2          3        4
	// Each string contains '\n' so every country will be written on a new line in file

	FILE *fp1 = fopen("file2.txt","w");
	// Open file "file2.txt" in write mode
	// If file does not exist → it will be created
	// If file already exists → old data will be removed
	//-----------------------------------------------------------------------------

	if(fp1 == NULL)
	{
		printf("Error..\n");
		return 0;     // terminate program if file cannot be opened
	}
	//------------------------------------------

	// Loop through all strings in the array
	for(int i=0 ; i < 5 ; i++)
	{
		fputs( str[i] , fp1 );
		// fputs() writes a complete string into the file
		// str[i] → address of the ith string
	}

	printf("Strings added in file..");
	// message displayed after writing data into the file

	//-------------------------------------------

	// fclose() closes the file and releases file resources
	fclose(fp1);

	return 0;
}

