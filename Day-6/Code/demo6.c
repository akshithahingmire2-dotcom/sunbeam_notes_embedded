#include<stdio.h>

/*
    Global Variable

    Keyword        : extern
    Initial value  : ZERO (default initialization)
    Memory         : Data Section
    Life           : Entire program execution
    Scope          : Entire file / program (if declared properly)
*/


int num1;
// If declared here (outside main),
// it becomes a GLOBAL variable.
// Default value would be 0.


// Declaration only (no memory allocated here)
extern int num2;   // Pure declaration

/*
    extern keyword:
        - Tells compiler that variable is defined somewhere else.
        - No memory is allocated here.
        - Only declaration, not definition.
*/

int main()
{
    int num3;      // Declaration + Definition (local variable)
    //int num1 = 10; // Local variable inside main()

    /*
        num1 here is LOCAL.
        It hides any global variable with same name.
    */

    // printf("num1 : %d \n",num1);  // Would print 10
    // printf("&num1 : %lu \n",&num1); // Prints stack address

    /*
        num2 is declared using extern.
        But if it is NOT defined anywhere,
        linker will give error:
            "undefined reference to num2"
    */

    printf("num2 : %d \n",num2);

    return 0;
}


// Definition of global variable
 int num2 = 5;
