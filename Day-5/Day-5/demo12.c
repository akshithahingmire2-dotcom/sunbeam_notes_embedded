#include<stdio.h>

/*
    4. Function takes arguments AND returns value

    Syntax:
        int function_name(int n1, int n2);

    Concept:
        - Calling function passes arguments
        - Function performs operation
        - Returns result to caller
*/


/*
    Problem:
        Write a function to add two integers
        and return the result.
*/


// Function Declarations (Prototypes)
int sum(int, int);      // Takes two int, returns int
int accept_int(void);   // Takes no argument, returns int
void print_sum(int);    // Takes int, returns nothing


int main()
{
    printf("main\n");

    // Function Calls

    int n1 = accept_int();   // First input
    printf("main\n");

    int n2 = accept_int();   // Second input
    printf("main\n");

    int res = sum(n1, n2);   // Add two numbers
    printf("main\n");

    print_sum(res);          // Print result
    printf("main\n");

    return 0;
}


// Function Definitions

/*
    sum()
    - Receives two integers (formal arguments)
    - Returns their addition
*/
int sum(int n1, int n2)
{
    printf("sum fun \n");

    int res = n1 + n2;

    return res;

    // Alternative:
    // return n1 + n2;
}


/*
    accept_int()
    - Takes input from user
    - Returns entered integer
*/
int accept_int(void)
{
    printf("accept fun \n");

    int num1;

    printf("Enter the num : ");
    scanf("%d",&num1);

    return num1;
}


/*
    print_sum()
    - Receives result
    - Prints it
    - Does not return anything
*/
void print_sum(int sum)
{
    printf("Print fun \n");
    printf("Sum : %d \n",sum);
}