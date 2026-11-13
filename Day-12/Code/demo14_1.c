#include<stdio.h>

// Write a program to create a file and write given data in it using fprintf() function
/*
	fprintf() is used to write formatted data to a file.
	It works similar to printf() but instead of printing to console,
	it writes to the specified file.
	syntax:
		int fprintf(FILE *stream, const char *format, ...);
	Parameters:
		1. stream → file pointer to the file where data will be written
		2. format → format string (like printf) that specifies how to format the data
		3. ...    → variable number of arguments that will be formatted according to the format string

*/
int main()
{
	int num=10;
	char ch = 'A';
	float pi = 3.14f;
	printf("num : %d ch : %c pi : %.2f \n",num,ch,pi);

	// Open file "file3.txt" in write mode
	FILE *fp1 = fopen("file3.txt","w");
	// If file does not exist → it will be created
	if(fp1 == NULL)
	{
		printf("Error..\n");
		return 0;// terminate program if file cannot be opened
	}
	//--------------------------------------------------

	// Write formatted data into file using fprintf()
	fprintf(fp1,"%d %c %.2f \n",num,ch,pi);

	//---------------------------------------------------
	// Close the file after writing data
	fclose(fp1);
	return 0;
}
