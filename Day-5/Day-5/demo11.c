#include<stdio.h>

/*
    3. Function does NOT take any argument
       but RETURNS a value to the calling function.

    Syntax:
        int function_name(void);

    Concept:
        - Function collects input inside its body
        - Returns a value using return statement
        - Calling function stores returned value
*/


// Example:
// Write a function that returns a short int value


// Function Declaration (Prototype)
short int accept_short_int(void);

int main()
{
    /*
        Function Call

        Function returns a value.
        That returned value must be stored
        in a variable.
    */

    int num1 = accept_short_int();   // First function call
    int num2 = accept_short_int();   // Second function call

    /*
        Even though function returns short int,
        it is safely stored into int variable
        (Implicit Type Promotion)
    */

    int sum = num1 + num2;

    printf("sum : %d \n",sum);

    return 0;
}


//Function Definition

short int accept_short_int(void)
{
    short int num1;   // Local variable (stored in stack)

    printf("Enter the num : ");
    scanf("%hd",&num1);   // %hd used for short int

    /*
        return statement:
        - Sends value back to caller
        - Control returns to calling function
    */
    return num1;
}