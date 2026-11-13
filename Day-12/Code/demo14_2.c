#include<stdio.h>

// Write a program to read a file and display its content on screen using fscanf() function
/*
	fscanf() is used to read formatted data from a file.
	It works similar to scanf() but instead of reading from console,
	it reads from the specified file.
	syntax:
		int fscanf(FILE *stream, const char *format, ...);
	Parameters:
		1. stream → file pointer to the file from which data will be read
		2. format → format string (like scanf) that specifies how to interpret the data
		3. ...    → variable number of pointers where the read data will be stored

*/

int main()
{
	int num;
	char ch ;
	float pi ;


	// Open file "file3.txt" in read mode
	FILE *fp1 = fopen("file3.txt","r");
	if(fp1 == NULL)
	{
		printf("Error..\n");
		return 0;// terminate program if file cannot be opened
	}
	//--------------------------------------------------

	// Read formatted data from file using fscanf()
	fscanf(fp1 ,"%d %c %f",&num,&ch,&pi);

	// Display the read data on screen
	printf("num : %d ch : %c pi : %.2f \n",num,ch,pi);
	//---------------------------------------------------
	// Close the file after reading data
	fclose(fp1);
	return 0;
}
