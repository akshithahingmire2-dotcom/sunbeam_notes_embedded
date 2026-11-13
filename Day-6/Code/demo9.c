#include<stdio.h>

/*
    Static Variable (Global Static)

    Keyword        : static
    Initial value  : ZERO (default)
    Memory         : Data Section
    Life           : Entire program execution
    Scope          : Limited (only within this file)

    Important:
        - static global variable cannot be accessed
          from another file.
*/


static int num1;  
/*
    Global static variable

    - Stored in Data section
    - Default initialized to 0
    - Accessible only within this source file
*/


// static int num2 = num1;  //ERROR:
// Global/static variables must be initialized using constant expressions.


void fun()
{
    /*
        num1 is accessible here
        because it is global (file scope).
    */

    printf("in fun num1 : %d \n", num1);
}


int main()
{
    printf("num1 : %d \n", num1);     // Default value = 0
    printf("&num1 : %lu \n", &num1);  // Address in Data section

    /*
        Demonstrating that static variable:
        - Retains value throughout program
        - Only one copy exists
    */

    ++num1;   // 0 → 1
    fun();    // Prints 1

    ++num1;   // 1 → 2
    fun();    // Prints 2

    ++num1;   // 2 → 3
    fun();    // Prints 3

    return 0;
}