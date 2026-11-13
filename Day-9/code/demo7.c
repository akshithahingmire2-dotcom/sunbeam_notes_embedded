#include<stdio.h>
#include<stdlib.h>

// Example execution from command line
// ./a.out 1 + 3.....char *argv[] = { "./a.out", "1", "+", "3", NULL }
//  index   0 1 2 3
//
// argv[0] → program name
// argv[1] → first number
// argv[2] → operator
// argv[3] → second number

// atoi()
// ----
// Converts a numeric string into an integer
//
// Example:
// int num = atoi("123");   // num becomes 123

int main( int argc , char *argv[] )
{
	// Check if correct number of arguments are passed
	// Expected arguments: program name + num1 + operator + num2
	// Total = 4
	if( argc != 4 )
	{
		printf("Oprans count not match..\n");
		return 0; // terminate program
	}

	// Convert first command line argument (string) into integer
	int num1 = atoi( argv[1] );

	// Convert third command line argument into integer
	int num2 = atoi( argv[3] );

	// Extract operator character
	// argv[2] is a string, so operator is the first character
	char op  =  argv[2][0];

	// Perform operation based on operator
	switch(op)
	{
		case '+' : printf("%d + %d = %d \n",num1,num2,num1+num2);
			  break;
		case '-' : printf("%d - %d = %d \n",num1,num2,num1-num2);
			  break;
		case '*' : printf("%d * %d = %d \n",num1,num2,num1*num2);
			  break;
		case '/' : if(num2 != 0)
				   		printf("%d / %d = %d \n",num1,num2,num1/num2);
			  	  else		   
				  		printf("Division by zero error \n");
			  break;
		default  : printf("Invalid operator \n");

	}
	return 0;
}