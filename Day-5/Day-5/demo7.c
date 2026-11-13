#include<stdio.h>

/*
    4. goto Statement

    Syntax:

        LABEL:
            statement-1;
            statement-2;
            ...
            goto LABEL;

    Definition:
        - goto transfers program control
          directly to a labeled statement.
        - It causes unconditional jump.
        - Generally NOT recommended
          (reduces code readability).

    Used rarely in modern programming.
*/

int main()
{
    /*
        Example:
        Print numbers from 1 to 5 using goto
    */

    int i = 1;   // Initialization

    HERE:   // Label definition

        printf("i = %d \n", i);

        i++;   // Increment

        /*
            Condition checking:

            2 < 6  → true
            3 < 6  → true
            4 < 6  → true
            5 < 6  → true
            6 < 6  → false → stop
        */

        if(i < 6)
        {
            goto HERE;   // Jump back to label
        }

    /*
        Once condition becomes false,
        control continues after the block.
    */

    return 0;   // Program terminated successfully
}