#include<stdio.h>

/*
    Problem:
        Write a function to calculate Factorial of a number.

    Definition:
        n! (Factorial of n) =
            1 * 2 * 3 * ... * n

    Example:
        5! = 1 * 2 * 3 * 4 * 5 = 120
*/

// Function Declaration (Prototype)
int fact(int);

int main()
{
    // Function Call

    int num = 5;

    /*
        fact(num) returns factorial value.
        Returned value is directly printed.
    */

    printf(" %d! = %d \n", num, fact(num));
    // Output:
    // 5! = 120

    return 0;
}

// Function Definition
/*
    fact()
    Logic:
        - Initialize result = 1
        - Multiply numbers from 1 to num
        - Return final result
*/

int fact(int num)
{
    int res = 1;   // Multiplicative identity
    int i;

    /*
        Loop execution for num = 5

        i = 1 → res = 1 * 1  = 1
        i = 2 → res = 2 * 1  = 2
        i = 3 → res = 3 * 2  = 6
        i = 4 → res = 4 * 6  = 24
        i = 5 → res = 5 * 24 = 120
    */

    for(i = 1; i <= num; i++)
    {
        res = i * res;
    }

    return res;   // Return factorial value to caller
}