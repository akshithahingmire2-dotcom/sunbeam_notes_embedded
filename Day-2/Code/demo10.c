#include<stdio.h>
/*
Escape seq
	-Print ASCII values of Escape Seq.
	- Escape Seq. are used to represent non printable characters
	- Escape Seq. always starts with backslash(\)
	- Escape Seq. are used in string and char constants only
	- Escape Seq. are not stored in memory as such , they are stored as their ASCII values
	- Escape Seq. are used to perform some specific task
		\n -> New line
		\t -> Tab
		\r -> Carrage return
		\b -> Backspace
		\a -> Alarm/Beep
*/
int main()
{
	// \n => Use to print in new line
	printf("One\ntwo\n");
	//one
	//two

	// \b => Use to move cursor one position back
	printf("SUNBB\bEAM\n");
	//sunbeam
		
	// \t => Use to print in tab space
	printf("SUNBEAM\tPGCPESD\n");				
	printf("a\tbcdef\n");

	//  \r -> Crrage return
	//     - It moves cursor to the beginning of the current line
	printf("123456\rABCDEFGH\n"); // here 123456 will be overwritten by ABCDEFGH
	//      ABCDEFGH	
	printf("ABCDEFGH\r12345\n"); // here ABCDEFGH will be overwritten by 12345 but 6,7,8 will not be overwritten because 12345 is of 5 digit and ABCDEFGH is of 8 digit
	//	12345FGH
	
	// \a => Use to produce beep sound in console
	printf("SUNBEAM\aKARAD\n");// here \a will produce beep sound in console
}



