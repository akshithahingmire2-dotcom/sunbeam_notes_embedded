
#include<stdio.h>

// Write a program to create a file and write some data in it using fwite() function
/*
	fwrite() is used to write binary data to a file.
	It writes data in binary format, which is more compact and faster to read/write compared to textual data.
	syntax:
	int fwrite(const void *ptr, size_t size, size_t count, FILE *stream);
	Parameters:
		1. ptr    → pointer to the data to be written (can be a structure, array, etc.)
		2. size   → size of each element to be written (in bytes)
		3. count  → number of elements to be written
		4. stream → file pointer to the file where data will be written
Return Value:
		Returns the number of elements successfully written. If this number is less than count, it indicates an error occurred during writing.
*/

typedef struct student
{
	int roll;       // Student roll number
	char name[20];  // Student name (string)
	float per;      // Student percentage
}stud_t;          // typedef alias for struct student


int main()
{
	// Open file "file4.db" in binary write mode
	// If file does not exist → it will be created
	// If file exists → previous data will be erased
	FILE *fp1 = fopen("file4.db" , "wb");
	if(fp1 == NULL)
	{
		printf("Error..\n");
		return 0;     // terminate program if file cannot be opened
	}
	//----------------------------------------

	// Create and initialize a student structure variable
	stud_t s1 = {10 , "ABC",90.0f};
	// roll = 10
	// name = ABC
	// per  = 90.0

	// fwrite() writes binary data to the file
	// &s1         → address of structure
	// sizeof(s1)  → number of bytes to write
	// 1           → number of records
	// fp1         → file pointer

	int ret	= fwrite(&s1 , sizeof(s1) , 1 , fp1);	

	// fwrite() returns number of records successfully written
	printf("%d record writed...\n",ret);

	//----------------------------------------

	// Close the file after writing data
	fclose(fp1);

	return 0;
}

