#include<stdio.h>

/*
    Program: Calculate Power (base ^ index)

    Input:
        base  = 2
        index = 3

    Output:
        2 ^ 3 = 8

    Logic:
        2 ^ 3  →  2 * 2 * 2

    Approach:
        Initialize result (pow) = 1
        Multiply base with pow, index number of times
*/

int main()
{
    int base, index, pow = 1;   // pow initialized to 1 (important for multiplication identity)

    // Accept base value
    printf("Enter the base : ");
    scanf("%d",&base);

    // Accept index (power)
    printf("Enter the index : ");
    scanf("%d",&index);

    int i;

    /*
        Loop runs 'index' number of times

        Example:
            base = 2
            index = 3

            Iteration 1:
                pow = 1 * 2  → 2
            Iteration 2:
                pow = 2 * 2  → 4
            Iteration 3:
                pow = 4 * 2  → 8
    */

    for ( i = 1 ; i <= index ; i++ )
    {
        pow = pow * base;   // Repeated multiplication
    }

    // Display result
    printf("%d ^ %d : %d \n",base,index,pow);

    return 0;   // Program terminated successfully
}