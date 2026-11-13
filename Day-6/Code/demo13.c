#include<stdio.h>

/*
    Program: Swap Two Numbers
    Important Concept:
        C uses CALL BY VALUE by default.
        That means:
            - A copy of actual arguments is passed
              to the function.
            - Original variables are NOT modified.
*/


//             10         20
int swap(int num1, int num2)
{
    /*
        num1 and num2 are FORMAL parameters.
        They receive COPIES of n1 and n2.

        num1 = 10
        num2 = 20
    */

    int temp = num1;   // temp = 10

    num1 = num2;       // num1 = 20
    num2 = temp;       // num2 = 10

    /*
        Swapping happens only inside this function.
        After function ends, these variables are destroyed.
    */
}


int main()
{
    int n1 = 10, n2 = 20;

    printf("Before swap : n1: %d n2 %d \n", n1, n2);  // 10 20

    swap(n1, n2);   // Passes copies

    /*
        Since swap() uses call by value,
        original n1 and n2 remain unchanged.
    */

    printf("After swap : n1: %d n2 %d \n", n1, n2);   // Still 10 20

    return 0;
}