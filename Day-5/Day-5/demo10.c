#include<stdio.h>

/*
    2. Function takes arguments but does NOT return value

    Syntax:
        void function_name(int n1, int n2);

    Concept:
        - Calling function passes values (Actual Arguments)
        - Function receives them as (Formal Arguments)
        - Function performs operation
        - No value is returned to caller
*/


// Example:
// Write a function that takes two float values
// and prints their sum inside the function body


// Function Declaration (Prototype)
// (Argument names optional in declaration)
void sum(float f1, float f2);

int main()
{
    /*
        Function Call

        Actual Arguments:
            10.2f and 20.5f

        These values are copied into
        formal parameters of function.
    */

    sum(10.2f, 20.5f);

    return 0;
}


// Function Definition

/*
    Formal Arguments:
        float f1
        float f2

    Actual arguments are copied into these variables.

    Example:
        f1 = 10.2f
        f2 = 20.5f
*/

void sum(float f1, float f2)
{
    float res;   // Local variable (stored in function stack frame)

    res = f1 + f2;   // Perform addition

    printf("Sum : %.2f \n", res);
}