#include<stdio.h>

/*
    Problem:

    Write a function to check whether a given number is prime or not.
        - If number is prime     → return 1
        - If number is not prime → return 0

    Write a function to print prime numbers in a given range.
        Example:
            Input:  min = 10, max = 100
            Output: All prime numbers between 10 and 100
*/


// Function Declarations (Prototypes)
int check_prime(int n1);
void renge(int min, int max);


int main()
{
    int min = 10, max = 100;

    // Function call to print prime numbers in range
    renge(min, max);

    return 0;
}


// Function Definitions


/*
    renge()

    Purpose:
        Prints all prime numbers between min and max.

    Logic:
        - Start from min
        - Check each number using check_prime()
        - If prime → print it
        - Continue until max
*/

void renge(int min, int max)
{
    // Loop runs from min to max
    while(min <= max)
    {
        // Call check_prime() for each number
        if (check_prime(min) == 1)
            printf("%d ", min);

        min++;   // Move to next number
    }
}


/*
    check_prime()

    Logic:
        - Start checking from 2
        - If any number divides n1 → not prime
        - If no divisor found → prime

    Example:
        4 → divisible by 2 → return 0
        5 → not divisible → return 1
*/

int check_prime(int n1)
{
    int i = 2;

    /*
        Loop runs till n1/2
        (Because no factor can exist beyond half,
         except the number itself)
    */

    while(i <= n1/2)
    {
        if(n1 % i == 0)
            return 0;   // Not prime

        i++;
    }

    return 1;   // Prime
}