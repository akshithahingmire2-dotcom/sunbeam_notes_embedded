#include<stdio.h>

/*
	ASCII values of char
	 	-Ascii values is a numeric value associated with character
		- It is a 7 bit code [ 0 to 127 ]
		- It is used to represent char in computer memory

		A->65    a -> 97       0 ->48
		B->66    b -> 98       1 ->49
		.        .             .
		.        .             .
		Z->90    z -> 122      9 ->57

*/


int main()
{
	printf("%c = %d(ASCII Value) \n",'A','A'); // A = 65
	printf("%c = %d(ASCII Value) \n",'B','B'); // A = 65
	printf("%c = %d(ASCII Value) \n",'Z','Z'); // A = 65
	
        printf("%c = %d(ASCII Value) \n",'a','a'); // A = 65
	printf("%c = %d(ASCII Value) \n",'b','b'); // A = 65
	printf("%c = %d(ASCII Value) \n",'c','c'); // A = 65

	printf("%c = %d(ASCII Value) \n",'0','0'); // 0 = 48
	printf("%c = %d(ASCII Value) \n",'1','1'); // 1 = 49
	printf("%c = %d(ASCII Value) \n",'9','9'); // 9 = 57


}







