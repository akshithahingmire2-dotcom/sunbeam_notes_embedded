#include<stdio.h>

/*
    Control Statements in C

    1. Decision Control Statements
        - if
        - if-else
        - switch

    2. Loop / Iterator Control Statements

        A) Entry-Controlled Loops (Condition checked before execution)
            - for loop
            - while loop

        B) Exit-Controlled Loop (Condition checked after execution)
            - do-while loop


    ------------------------------------------------------------

    1. while loop

    Syntax:

        <Initialization>

        while ( <condition / expression> )
        {
            // Statements
            <Modification>
        }

    • Initialization → executed once before loop starts
    • Condition → checked before every iteration
    • Modification → updates loop control variable
	• Without modification, condition never changes, resulting in INFINITE LOOP.
*/

int main()
{
    int i = 1;   // Initialization step (loop control variable)

    /*
        Condition evaluation sequence:

            1 <= 5   → true
            2 <= 5   → true
            3 <= 5   → true
            4 <= 5   → true
            5 <= 5   → true
            6 <= 5   → false  (loop terminates)
    */

    while ( i <= 5 )   // Entry-controlled condition
    {
        printf("i = %d \n", i);   // Loop body (prints current value of i)
        // i = i + 1;
        // ++i;
        i++;     // Increment i by 1
        // 1 → 2 → 3 → 4 → 5 → 6

    }

    // Control comes here after condition becomes false

    return 0;   
}