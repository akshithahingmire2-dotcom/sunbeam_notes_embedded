#include<stdio.h>

/*
printf() - library function to print on console
		syntax:
			printf("format string", arg1, arg2, ...);
		format string - string containing text to be printed and format specifiers
		format specifiers - placeholders for variables to be printed
			%d  - for integer
			%c  - for character
			%f  - for float
			%lf - for double

*/

int main()
{
	int num1= 10;
	char ch = 'S';
	float pi = 3.142;
	double d1 = 6.145;
	printf("Int  num1 = %d \n",num1);
	printf("Char ch = %c \n",ch);
	printf("Float pi = %f \n",pi);
	printf("Double d1 = %lf \n",d1);

	printf("num1 = %d ch = %c , pi =%f  ,d1 = %lf \n",num1,ch,pi,d1);


	return 0;
}





