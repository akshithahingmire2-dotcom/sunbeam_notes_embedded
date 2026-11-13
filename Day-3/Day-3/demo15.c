#include<stdio.h>

int main()
{

	/*
	//cond ?   True : False
	  10   ? break : printf("Hello\n")  ; // Error due to break is not a statement
	   0   ? break : printf("Hello\n")  ;  // Jump statement is not a statement and it is not allowed in conditional operator
	*/

	int num = 10;
	if (++num , ++num , 0) //here 0 is the last operand and it is false so it will execute else part
		printf("all ok\n");
	else
		printf("Not ok \n"); //so it will print Not ok


	return 0 ;
}
