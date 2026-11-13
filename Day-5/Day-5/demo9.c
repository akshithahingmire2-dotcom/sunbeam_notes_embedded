#include<stdio.h>

/*
    Function in C

    1. Function Declaration (Prototype)
       - Informs the compiler about:
            • Function name
            • Return type
            • Argument list
       - No function body here

       Syntax:
            <return_type> <function_name>(<list_of_arguments>);

    2. Function Definition
       - Contains the actual body / logic of the function

       Syntax:
            <return_type> <function_name>(<list_of_arguments>)
            {
                // Body of function
            }

    3. Function Call
       - Transfers control to the function body
       - Executes the function statements
       - After execution, control returns to caller

       Syntax:
            function_name(<arguments>);

    ------------------------------------------------------------

    Four Types of Functions (based on input and output)

    1. No arguments, No return value
            void function_name(void);

    2. With arguments, No return value
            void function_name(int n1, int n2);

    3. No arguments, Returns value
            int function_name(void);

    4. With arguments, Returns value
            int function_name(int n1, int n2);

    Note:
        • A function can return only ONE value.
        • Control returns to calling function after execution.
*/


// Example:
// Print a message when function is called

// Function Declaration (Prototype)
void print_msg(void);

int main()
{
    //Function Call
    // Control transfers to print_msg() function
    print_msg();

    return 0;   // Program ends after returning from function
}


// Function Definition
void print_msg(void)
{
    printf("Hello ESD..\n");
    printf("Msg from function body\n");
}