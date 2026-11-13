#include<stdio.h>

// Accept a number from user and print its multiplication table (1 to 10)

int main()
{	
	int num1;   // Variable to store the number entered by user

	printf("Enter the num : ");
	scanf("%d",&num1);   // Accept input number

	int i = 1;   // Initialization of loop control variable

	
	    // Condition checking sequence:

	    //     1  <= 10  → true
	    //     2  <= 10  → true
	    //     ...
	    //    10  <= 10  → true
	    //    11  <= 10  → false  → loop terminates
	while( i <= 10 )   // Entry-controlled loop
	{
		// Printing multiplication result
		printf(" %d \n", i * num1);
		    //     1 * 10  →  10
		    //     2 * 10  →  20
		    //     ...
		    //    10 * 10  → 100
		

		i++;   // Modification step (increment i)
		// 1 → 2 → 3 → ... → 10 → 11
	}

	// Control comes here after condition becomes false

	return 0;   
}