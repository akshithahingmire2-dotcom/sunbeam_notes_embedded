#include<stdio.h>

//Ruels of Switch - Case Statement

int main()
{
/*  
    Example 1: Fall-through behavior in switch

    switch ( 10 )
    {
        case 10: printf("ok  \n ");
               // break;   // If break is removed, control falls to next case
        case 20: printf("Not ok \n");
            break;
    }

    Explanation:
    - switch expression value = 10
    - case 10 matches → prints "ok"
    - Since break is commented, control falls to case 20
    - Then "Not ok" also gets printed
    - This is called FALL-THROUGH behavior
*/

/*
    Example 2: Invalid switch expression and case labels

    switch( 10.0f )
    {
        case 10.0f : printf("Sunbeam \n");
                break;
        case 20.2f : printf("Karad\n");
                break;
    }

    Explanation:
    - switch only supports:
        int, char, enum (integral types)
    - float or double are NOT allowed in switch
    - case labels must be constant integral expressions
    - 10.0f and 20.2f are floating constants → invalid
*/

    int x = 10, y = 4;

    /*
        Important Rules Demonstrated Below:

        1. switch expression must be integral type
        2. case label must be a CONSTANT expression
        3. Variable expressions are NOT allowed in case label
    */

    switch( x )
    {
        case 10:
            printf("Ok \n");

            // Local variable declared inside case block
            int n1 = 10;
            printf("n1 = %d \n",n1);
            break;

        case y + 5 :   // ❌ Invalid in standard C
            // Case label must be compile-time constant
            // y is a variable → y + 5 is NOT constant
            printf("Sunbeam \n");

            int n2 = 20;
            break;
    }

    return 0;
}