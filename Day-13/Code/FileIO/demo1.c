#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
       ftell()
       ------------------------------------------------
       - Returns the current file position of the given stream.
       - The file position is the offset in bytes from the beginning of the file.
       - Used to know where the file pointer currently is.

       syntax :
            long int ftell(FILE *stream);

       Example:
            If pointer is at beginning → returns 0
            If pointer moved 5 bytes → returns 5
*/


/*
       fseek()
       ------------------------------------------------
       - Used to move the file pointer to a desired position in the file.

       syntax :
            int fseek(FILE *stream, long int offset, int whence);

       whence :
            SEEK_SET  → beginning of file
            SEEK_CUR  → current position
            SEEK_END  → end of file

       Examples :
            fseek(fp, 0, SEEK_SET);   // Move pointer to beginning
            fseek(fp, 10, SEEK_CUR);  // Move 10 bytes forward from current position
            fseek(fp, -5, SEEK_END);  // Move 5 bytes backward from end of file
*/


/*
       rewind()
       ------------------------------------------------
       - Moves file pointer to the beginning of the file.
       - Similar to fseek(fp,0,SEEK_SET)

       syntax :
            void rewind(FILE *stream);
*/


/*
data.txt
------------------------------
ABCDEFGHIJKLMNOPQRSTUVWXYZ
------------------------------
*/


int main()
{
    // Open file in read mode
	FILE *fp= fopen("data.txt","r");

    // Get current position of file pointer (initially at beginning)
	int pos = ftell(fp);
	printf("cur pos : %d \n",pos);

	char ch;

    // Read characters until end of file
    // File pointer moves forward automatically
	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}
	printf("\n");

	//-----------------------------------------------
    // Move file pointer back to beginning
	fseek(fp,0,SEEK_SET);

    // Check position again
	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

    // Read entire file again
	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}
	printf("\n");

    // Now pointer is at end of file
	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

	//-----------------------------------------------

    // Move file pointer to beginning using rewind()
	rewind(fp);

	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

    // Read file again
	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}
	printf("\n");

	//--------------------------------------------

    // File pointer again reached end
	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

    // Move pointer 10 bytes before end of file
	fseek(fp,-10,SEEK_END);

	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

    // Read last 10 characters
	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}
	printf("\n");

	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

	//-----------------------------------------------

    // Move pointer 10 bytes forward from current position
    // (Since pointer already at EOF, this usually keeps it at EOF)
	fseek(fp,10,SEEK_CUR);

	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

	while( (ch=fgetc(fp)) != EOF )
	{
		printf("%c",ch);
	}
	printf("\n");

	pos = ftell(fp);
	printf("cur pos : %d \n",pos);

    // Close the file
	fclose(fp);
	
	return 0;
}