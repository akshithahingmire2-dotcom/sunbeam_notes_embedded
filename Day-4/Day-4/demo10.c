#include<stdio.h>

/*
    On-Exit Controlled Loop
    -------------------------
    do-while loop

    Syntax:

        <Initialization>

        do
        {
            // Statements
            <Modification>
        }
        while ( <condition / expression> );

    Important Points:
    • Condition is checked AFTER executing loop body.
    • Loop body executes at least once.
    • Semicolon (;) after while condition is mandatory.
*/

int main()
{
    int i = 1;   // Initialization of loop control variable

    /*
        Execution Flow:

        Step 1:
            Loop body executes first (without checking condition)

        Step 2:
            Condition is checked (i <= 5)

        Step 3:
            If true → loop repeats
            If false → loop terminates
    */

    do
    {
        printf("i=%d \n",i);   // Prints: 1 2 3 4 5

        i++;   // Modification step
               // i progression:
               // 1 → 2 → 3 → 4 → 5 → 6

    }while( i <= 5 );   // Exit condition check
        //  2 <= 5 → true
        //  3 <= 5 → true
        //  4 <= 5 → true
        //  5 <= 5 → true
        //  6 <= 5 → false → loop stops
    

    // Control comes here after condition becomes false

    return 0;   
}