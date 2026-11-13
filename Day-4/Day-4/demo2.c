#include<stdio.h>

/*
    Design a Basic Calculator

    Supported Operators:
        +   Addition
        -   Subtraction
        *   Multiplication
        /   Division
        %   Modulus

    Input  : num1, num2, operator
    Output : num1 operator num2 = result
*/

int main()
{
    int num1, num2;   // Integer operands
    char opr;         // Operator (+, -, *, /, %)
    float res;        // Result stored in float (for division handling)

    // Accept first number
    printf("Enter the num1 : ");
    scanf("%d",&num1);  

    // Accept operator
    printf("Enter the opr  + - * / %% :"); 
    // %*c is used to ignore leftover newline character from previous input
    scanf("%*c%c",&opr);

    // Accept second number
    printf("Enter the num2 :"); 
    scanf("%d",&num2);

    // Switch statement to perform operation based on operator
    switch ( opr )
    {
        case '+' : 
            res = num1 + num2;   // Addition
            break;

        case '-' : 
            res = num1 - num2;   // Subtraction
            break;

        case '*' : 
            res = num1 * num2;   // Multiplication
            break;

        case '/' : 
            // Check division by zero
            if (num2 == 0 )
                printf("Can't div by Zero..\n");
            else
                res = num1  / num2 ;   // Division (integer division stored in float)
            break;

        case '%' : 
            res = num1 % num2 ;   // Modulus (remainder)
            break;

        default : 
            printf("Invalid Oprator \n");   // Executes if operator is invalid
    }
    
    /*
        Printing condition explanation:

        Case 1:
            If operator is '/' AND num2 != 0
            → Valid division

        Case 2:
            If operator is NOT '/'
            → Safe to print result

        Combined condition:
            (num2 != 0 && opr == '/') || (opr != '/')

        Meaning:
            Print result if:
            - Division is valid
            OR
            - Operator is not division
    */

    if(  (num2 !=0 && opr == '/' ) || ( opr !=  '/') )
    {
        printf(" %d  %c  %d =  %.2f \n",num1,opr,num2,res);
    }

    return 0;  
}