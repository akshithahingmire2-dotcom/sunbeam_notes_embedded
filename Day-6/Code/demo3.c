#include<stdio.h>

/*
//Local/ Auto variable
/*
   Storage classes:
   	- tells about two things of variables
		- life - existence of variable in memory
		- scope - where we can access that varible
	- Block is a number of statements enclosed in curly braces

	- There are 4 storage classes in C
		1. Auto/local
			keyword - auto
			storage - stack
			default value - garbage
			life - block
			scope - block
		- precedence is always given to a local variable
		- if variable is not found then it is searched into its immediate outer block

		2. Register
			keyword - register
			storage - cpu register
			default value - garbage
			life - block
			scope - block

		3. Global/extern
			keyword - extern
			storage - data section
			default value - zero
			life - program
			scope - program

		4. Static
			keyword - static
			storage - data section
			default value - zero
			life - program
			scope - limited to block
        
*/

/*
Local/ Auto variable
	keyword - auto
	storage - stack
	default value - garbage
	life - block
	scope - block
	- precedence is always given to a local variable
	- if variable is not found then it is searched into its immediate outer block


*/


int main()
{
    int num1;          // Local variable (auto by default)
    auto int num2;     // Explicit auto keyword (optional)

    /*
        Since num1 and num2 are NOT initialized,
        they contain garbage values.
    */
    printf("num1 : %d , num2 = %d \n", num1, num2); // Garbage values

    // printf("&num1 : %lu &num2 = %lu \n ", &num1, &num2);//access memory address of local variables 
    // Prints memory address (stack location)


    int num3 = 10;
    printf("num3: %d \n", num3);   // Accessible here

    {
        //Block Scope - Level 1
        int num4 = 20;

        printf("scope-1 num4 : %d \n", num4);  // Accessible
        printf("scope-1 num3 : %d \n", num3);  // Outer variable accessible

        {
            //Block Scope - Level 2
            int num5 = 30;

            printf("scope-2 num5 : %d \n", num5);  // Accessible
            printf("scope-2 num4 : %d \n", num4);  // Accessible (outer block)
            printf("scope-2 num3 : %d \n", num3);  // Accessible (outer block)
        }

        /*
            printf("scope-1 num5 : %d \n", num5);
            ERROR: num5 is not accessible outside inner block.
        */
    }

    /*
        printf("scope-1 num4 : %d \n", num4);
        ERROR:  num4 destroyed after block ends.

        printf("num3: %d \n", num3);
        OK: num3 belongs to main block.
    */

    return 0;
}