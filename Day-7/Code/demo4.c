#include<stdio.h>

/*
	swap two numbers
	- without using global variables
	- using pointers
	- using pass by address (call by reference concept)
*/


// Function Declaration
int swap(int *p1, int *p2);

int main()
{
	int n1 = 10;   // n1 = 10 , &n1 = 100 (example)
	int n2 = 20;   // n2 = 20 , &n2 = 200 (example)

	printf("Before swap : n1 = %d n2 : %d \n", n1, n2); // 10 20
	
	/*
		Function Call

		We pass addresses of n1 and n2.

		&n1 → 100
		&n2 → 200

		This is called:
			Pass by Address
			(Call by Reference concept in C)
	*/
	swap(&n1, &n2);

	printf("After swap : n1 = %d n2 : %d \n", n1, n2); // 20 10

	return 0;
}


/*
	Function Definition
	Formal Parameters:
		int *p1  → stores address of n1
		int *p2  → stores address of n2

		p1 = 100
		p2 = 200
*/
int swap(int *p1, int *p2)
{
	/*
		*p1 → value at address 100 → 10
		*p2 → value at address 200 → 20
	*/
	int temp = *p1;   // temp = 10
	*p1 = *p2;        // value at address 100 becomes 20
	*p2 = temp;       // value at address 200 becomes 10
}