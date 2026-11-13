#include<stdio.h>

/*
    Program: Simple Calculator using Menu-Driven Logic

    Features:
        0 → Exit
        1 → Addition
        2 → Subtraction
        3 → Multiplication
        4 → Division

    Concept Used:
        - do-while loop (menu repeats until user selects Exit)
        - switch-case (for operation selection)
*/

int main()
{
    int num1, num2, choice;   // num1 & num2 = operands, choice = menu selection
    float res;                // To store result (float used for division)

    /*
        Menu-driven programs usually use do-while loop
        so that menu is displayed at least once.
    */

    do
    {
        // Accept two numbers from user
        printf("Enter Two number : ");
        scanf("%d%d",&num1,&num2);

        // Display menu options
        printf("0.Exit\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");

        printf("Enter the Choice : ");
        scanf("%d",&choice);

        // Perform operation based on user's choice
        switch (choice)
        {
            case 0 :
                printf("Bye...\n");   // Exit option
                break;

            case 1 :
                res = num1 + num2;
                printf("Add : %.2f \n",res);
                break;

            case 2 :	
                res = num1 - num2;
                printf("Sub : %.2f \n",res);
                break;

            case 3 :
                res = num1 * num2;
                printf("Mul : %.2f \n",res);
                break;

            case 4 :
                // Division with zero-check
                if( num2 == 0)
                {
                    printf("Can't Div by zero \n");
                }
                else
                {
                    res = (float)num1 / num2;   // Typecasting for proper division
                    printf("Div : %.2f \n",res);
                }
                break;

            default :
                printf("Invalid Choice..\n");   // Handles wrong menu input
                break;
        }

    }while( choice != 0 );   // Loop continues until user selects Exit

    return 0;   // Program terminated successfully
}