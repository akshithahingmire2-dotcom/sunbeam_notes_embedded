#include<stdio.h> // Include standard input-output header for printf function
#include"header.h" 
// Include our custom header file which contains the declaration of addition function
//"" is used for user-defined header files. It tells the compiler to look for header.h in the current directory first.


int sum;//Global variable definition
int main()
{

	int num1 = 10 , num2 = 20;
	addition(num1,num2);//Function call to addition function defined in fun.c
	printf("sum : %d \n",sum);
	return 0;
}
/*
compile : gcc main.c fun.c
Run : ./a.out

*/
