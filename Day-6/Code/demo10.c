#include<stdio.h>

/*
    Demonstration of Static Local Variable

    Key Points:

    static local variable:
        - Memory        : Data Section
        - Initial value : Initialized only once
        - Life          : Entire program execution
        - Scope         : Limited to the function (block scope)
*/

void fun()
{
    // int num = 10;   // Normal local variable (stored in stack)

    static int num = 10;
    /*
        static local variable:

        - Initialized only once (first time function is called)
        - Value persists between function calls
        - Stored in Data section (not stack)
    */

    num++;   // Value retained across calls

    printf("num : %d \n", num);
    /*
        1st call → 10 → 11
        2nd call → 11 → 12
        3rd call → 12 → 13
    */
}

int main()
{
    fun();  // Prints 11
    fun();  // Prints 12
    fun();  // Prints 13

    /*
        printf("main : num : %d \n", num);  //
		ERROR:
        num is declared inside fun().
        Its scope is limited to fun().
        main() cannot access it.
    */

    return 0;
}

/*
    Memory Behavior:

    Data Section:
        num = 10 → 11 → 12 → 13

    Stack:
        No new num created each time (because static).
*/