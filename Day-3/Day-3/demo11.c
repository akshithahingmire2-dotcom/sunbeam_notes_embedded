#include<stdio.h>

/*
	Accept char from user and check
		- It is alphabet
			- uppercase or lowercase
		- Numerical char
		- special char [space , Enter , Tab Backspace...]

	A => 65 B=>66 C => 67 ........Z => 90
	a =>97  b=>98 c =>99  ........z => 122
	0 =>48  1=>49 2 => 50 ........9 =>  57
	
*/


int main()
{
	char ch;
	printf("Enter the char : ");
	scanf("%c",&ch); //A

	//  65 >= 65 && 65 <=90
	if( ch >= 65 && ch <= 90 )
		printf("Uppercase latter : %c \n",ch);
	else if ( ch >= 97 && ch <= 122 )
		printf("Lowercase latter : %c \n",ch);
	else if( ch >= 48 && ch <= 57)
		printf("Digit latter : %c \n",ch);
	else if (ch == '\n')
		printf("Enter key press..\n");
	else if (ch == '\t')
		printf("Tab key press \n");
	else
		printf("Other key press..\n");

	return 0;
}







