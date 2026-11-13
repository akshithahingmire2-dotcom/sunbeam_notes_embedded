#include<stdio.h>
/*
    Program:
        Swap two numbers using a function.

    Concept Used:
        Global Variables

    Important:
        Global variables are accessible
        throughout the program.
*/
int num1, num2;   // Global variables (stored in Data section)

int swap();       // Function declaration


int main()
{
    printf("Enter num1 : ");
    scanf("%d", &num1);   // Example: 10

    printf("Enter num2 : ");
    scanf("%d", &num2);   // Example: 20

    printf("Before swap : num1 : %d num2 : %d \n", num1, num2);
    // 10 20

    /*
        swap() does not take arguments.
        It directly modifies global variables.
    */
    swap();// Function call

    printf("After swap : num1 : %d num2 : %d \n", num1, num2);
    // 20 10

    return 0;
}
/*
    swap()

    - No parameters
    - Directly accesses global variables
    - Swapping works because same memory
      locations are modified
*/
int swap()
{
    int temp = num1;   // temp = 10

    num1 = num2;       // num1 = 20
    num2 = temp;       // num2 = 10
}