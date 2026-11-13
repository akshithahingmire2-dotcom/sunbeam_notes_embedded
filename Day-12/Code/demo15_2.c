#include<stdio.h>

//write a program to read a file created in demo15_1.c and display its content on screen using fread() function
/*	
	fread() is used to read binary data from a file.
		It reads data in binary format, which is more compact and faster to read/write compared to textual data.
	syntax:
		int fread(void *ptr, size_t size, size_t count, FILE *stream);
	Parameters:
		1. ptr    → pointer to the memory location where the read data will be stored (can be a structure, array, etc.)
		2. size   → size of each element to be read (in bytes)
		3. count  → number of elements to be read
		4. stream → file pointer to the file from which data will be read
    Return Value:
		Returns the number of elements successfully read. If this number is less than count, it indicates an error occurred during reading or end of file was reached before reading the specified number of elements.
*/
typedef struct student
{
	int roll;
	char name[20];
	float per;
}stud_t;

int main()
{
	FILE *fp1 = fopen("file4.db" , "rb");
	//----
	//----------------------------------------
	stud_t s1;

	int ret	=  fread(&s1 , sizeof(s1), 1 , fp1);	
	printf("%d record read...\n",ret);

	printf("Roll :%d  Name : %s   Per : %.2f \n",s1.roll,s1.name,s1.per);

	//----------------------------------------
	fclose(fp1);
	return 0;
}


