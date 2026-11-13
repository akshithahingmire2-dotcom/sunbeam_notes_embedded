#include<stdio.h>

/*
    2. for loop

    Syntax:

        for ( <initialization> ; <condition> ; <modification> )
        {
            // statements
        }

    Execution Flow:
        1. Initialization → executed once at the beginning
        2. Condition → checked before every iteration
        3. Loop Body → executes if condition is true
        4. Modification → executed after each iteration
        5. Steps 2–4 repeat until condition becomes false

    Note:
        for loop is an entry-controlled loop.
*/

int main()
{
    int i;   // Loop control variable

    /*
        Execution Trace:

            Init:  i = 1

            Cond:  1 <= 5  → true   → print 1   → i becomes 2
                   2 <= 5  → true   → print 2   → i becomes 3
                   3 <= 5  → true   → print 3   → i becomes 4
                   4 <= 5  → true   → print 4   → i becomes 5
                   5 <= 5  → true   → print 5   → i becomes 6
                   6 <= 5  → false  → loop stops
    */

    for ( i = 1 ; i <= 5 ; i++ )
    {
        printf("i = %d \n", i);   // Loop body (prints current value of i)
    }

    // Control comes here after condition becomes false

    return 0;   
}