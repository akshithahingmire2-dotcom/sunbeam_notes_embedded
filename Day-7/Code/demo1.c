#include<stdio.h>

/*
    Program:
        Swap two given numbers using a function.

    Important Concept:
        C uses CALL BY VALUE by default.
        That means:
            - Copies of variables are passed.
            - Original variables are NOT modified.
*/


// Function Declaration
int swap(int n1, int n2);

int main()
{
    int num1, num2;

    printf("Enter num1 : ");
    scanf("%d",&num1);   // Example: 10

    printf("Enter num2 : ");
    scanf("%d",&num2);   // Example: 20

    printf("Before swap : num1 : %d num2 : %d \n", num1, num2);
    // 10 20

    /*
        Function Call

        num1 and num2 are ACTUAL ARGUMENTS.

        Values passed:
            n1 = 10
            n2 = 20

        Copies are sent to function.
    */
    swap(num1, num2);

    /*
        Since function uses call by value,
        original num1 and num2 remain unchanged.
    */

    printf("After swap : num1 : %d num2 : %d \n", num1, num2);
    // Still 10 20

    return 0;
}


/*
    Function Definition

    a and b are FORMAL PARAMETERS.
    They receive COPIES of num1 and num2.
        a = 10
        b = 20
*/
int swap(int a, int b)
{
    int temp = a;   // temp = 10

    a = b;          // a = 20
    b = temp;       // b = 10

    /*
        Swapping happens only inside this function.
        After function ends:
            a, b, temp are destroyed.
    */
}