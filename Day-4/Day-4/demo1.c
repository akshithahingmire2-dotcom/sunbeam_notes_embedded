#include<stdio.h>

/*
    2. Switch - Case Statement

    Syntax:

        switch ( expression )
        {
            case label1 :
                statement(s);
                break;

            case label2 :
                statement(s);
                break;

            ...
            
            default :
                statement(s);
        }

    • switch evaluates the expression once.
    • Control jumps to the matching case label.
    • break is used to terminate the case block.
    • If break is not used, fall-through occurs.
    • default executes when no case matches.
*/

int main()
{
    // Accept the month number from user and print number of days in that month

    int month;   // Variable to store month number (1–12)

    printf("Enter the month : ");
    scanf("%d",&month);   // Taking integer input from user

    // Switch statement checks value of month
    switch ( month )
    {
        case 1 : 
            printf("Jan has 31 days\n");
            break;   // Exit switch after execution

        case 2 : 
            printf("Feb has 28/29 days\n");
            break;

        case 3 :
            printf("March has 31 days\n");
            break;

        // Additional cases (4–12) can be added similarly

        default : 
			// Executes if month is not 1–12
            printf("Invalid month \n");  // Executes if month is not 1–12
            break;
    }

    // In switch-case:
    // 1. Case sequence does NOT matter.
    // 2. break prevents fall-through.
    // 3. After break, control goes outside switch block.

    return 0;   
}