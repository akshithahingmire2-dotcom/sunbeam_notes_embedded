#include<stdio.h>

/*
    Global Variables

    - Declared outside all functions
    - Stored in Data Section
    - Default initial value = 0 (if not initialized)
    - Lifetime = Entire program execution
    - Scope = Whole file (can be accessed by all functions)
*/

int num1 = 10;   // Declaration + Definition (initialized global variable)

int num2;        // Global variable (default value = 0)

// int num3 = num2;  //ERROR 
// Global variable initialization must be done using constant expressions.


int fun()
{
    /*
        If we declare local num2 here:

        int num2 = 100;

        This num2 would be LOCAL to fun().
        It would hide global num2.
    */

    num1++;   // Accessing and modifying global variable

    /*
        Since num1 is global:
        Its value persists between function calls.
    */

    printf("num1 : %d \n", num1);
}


int main()
{
    /*
        fun() is called 3 times.

        Initial value:
            num1 = 10

        1st call → num1 becomes 11
        2nd call → num1 becomes 12
        3rd call → num1 becomes 13
    */

    fun();
    fun();
    fun();

    return 0;
}