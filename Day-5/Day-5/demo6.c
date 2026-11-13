#include<stdio.h>

/*
    2. continue Statement

    • Used only inside loops (for, while, do-while)
    • Skips remaining statements of current iteration
    • Transfers control to:
        - Condition check (while / do-while)
        - Modification step (for loop)
*/

int main()
{
	int i = 1;

	/*
	    -------------------------------
	    First while loop
	    -------------------------------

	    Condition: i++ <= 10

	    Important:
	    - Post-increment is used.
	    - Comparison happens first.
	    - Then i increments automatically.

	    Flow:
	        1 <= 10 → true → i becomes 2
	        2 <= 10 → true → i becomes 3
	        ...
	        10 <= 10 → true → i becomes 11
	        11 <= 10 → false → loop stops
	*/

	while( i++ <= 10)
	{	
		printf("one\n");
		printf("Two \n");

		/*
		    continue skips remaining statements
		    and jumps to condition checking.
		*/
		continue;

		// These statements never execute
		printf("Threee\n");
		printf("four\n");
	}


	/*
	    -------------------------------
	    Second while loop
	    -------------------------------

	    Current value of i after first loop:
	        i = 12

	    Condition:
	        while(i <= 10)

	    Since 12 <= 10 is FALSE,
	    this loop will NEVER execute.
	*/

	while( i <= 10)
	{	
		printf("one\n");
		printf("Two \n");

		/*
		    Important Concept:
		    There is NO increment inside this loop.

		    If this loop were entered,
		    it would become an INFINITE LOOP
		    because i never changes.
		*/
		continue;

		// Unreachable code
		printf("Threee\n");
		printf("four\n");
	}


	/*
	    --------------------------------
	    For loop version (commented)
	    --------------------------------

	    In for loop:
	        continue transfers control
	        to modification step (i++)
	        and then condition check.
	*/

	/*
	int i ;
	for( i = 1 ; i <= 10 ; i++)
	{
		printf("one\n");
		printf("Two \n");
		continue;

		// Never executes
		printf("Threee\n");
		printf("four\n");
	}
	*/

	return 0;
}