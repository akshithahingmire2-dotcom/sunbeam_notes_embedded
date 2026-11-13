#include<stdio.h>

/*
    Jump Statements in C

    1. break
    2. continue
    3. goto
    4. return

    ----------------------------------------

    1. break Statement

    • Used inside:
        - Loop (for, while, do-while)
        - switch-case

    • Purpose:
        - Immediately terminates the loop or switch
        - Control moves outside the block { }
*/

int main()
{
    int i = 1;   // Initialization of loop control variable

    /*
        Loop runs while condition is true
        But break will stop it early
    */

    while( i <= 10 )	
    {
        printf("i : %d \n", i);   // Prints: 1 2 3 4 5

        /*
            When i becomes 5,
            break statement executes
            and loop terminates immediately
        */

        if(i == 5)
        {
            break;   // Stops the loop immediately
        }

        i++;   // Increment step
               // 1 → 2 → 3 → 4 → 5
    }

    // Control comes here due to break statement

    return 0;   
}