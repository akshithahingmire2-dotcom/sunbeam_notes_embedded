#include<stdio.h>
#include<stdlib.h>

/*
 Here we will see how to use enum to create a simple calculator program.
	- We will define an enum to represent different operations of the calculator.
	- It will increase readability and maintainability of code.
*/

int main()
{
	int num1,num2;

	/*
	enum opr → user defined data type
	It represents different operations of calculator.

	Default values assigned automatically:
	EXIT = 0
	ADD  = 1
	SUB  = 2
	MUL  = 3
	DIV  = 4
	*/

	enum opr{ EXIT,ADD,SUB,MUL,DIV}op2;
	//         0    1   2   3   4

	// variable of enum type
	enum opr op1;

	do
	{
		printf("Enter the num1 and num2 :");
		scanf("%d%d",&num1,&num2);

		/*
		Display menu options
		*/
		printf("0.EXIT\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");

		printf("Enter your choice : ");

		/*
		Reading value into enum variable.

		op1 is enum type but scanf expects pointer to int,
		so we typecast its address to (int *)
		*/

		scanf("%d", (int*)&op1);

		/*
		Perform operation based on user choice
		using switch-case.
		*/

		switch(op1)
		{
			case ADD :
				printf("%d + %d = %d \n",num1,num2,num1+num2);
				break;

			case SUB :
				printf("%d - %d = %d \n",num1,num2,num1-num2);
				break;

			case MUL :
				printf("%d * %d = %d \n",num1,num2,num1*num2);
				break;

			case DIV :
				printf("%d / %d = %d \n",num1,num2,num1/num2);
				break;

			case EXIT :
				printf("Exit\n");
				break;
		}

	}while(op1 != EXIT);  // repeat until user selects EXIT

	return 0;
}