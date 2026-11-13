#include<stdio.h>

/*
	Write a function:
		- that takes two integers as input
		- calculates their sum and difference
		- returns results using pointers
	Important:
		- we use pointers to return multiple values.
*/

void fun (int n1, int n2, int *ps, int *pd);

int main()
{
	int num1 = 10;   // num1 = 10  , &num1 = 100 (example)
	int num2 = 20;   // num2 = 20  , &num2 = 200 (example)

	int sum, diff;   // &sum = 300 , &diff = 400 (example)
	/*
		Function Call
		Actual Arguments:
			num1, num2  → values
			&sum, &diff → addresses
		This is Pass by Address.
	*/
	fun(num1, num2, &sum, &diff);

	printf("num1 : %d , num2 : %d \n", num1, num2);// 10 20
	printf("sum : %d , diff : %d \n", sum, diff);  // sum = 30 , diff = -10

	return 0;
}


/*
	Function Definition
	Formal Parameters:
		n1 = 10
		n2 = 20
		ps = address of sum (300)
		pd = address of diff (400)
*/
void fun (int n1, int n2, int *ps, int *pd)
{
	/*
		*ps means:
		Go to address stored in ps
		and store result there.
	*/
	*ps = n1 + n2;
	// *(300) = 10 + 20
	// sum becomes 30

	*pd = n1 - n2;
	// *(400) = 10 - 20
	// diff becomes -10
}