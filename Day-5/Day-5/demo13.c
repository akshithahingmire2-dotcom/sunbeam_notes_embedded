#include<stdio.h>

/*
    Problem:
        Write a function to check whether a given number is prime or not.

    Requirement:
        - If number is prime     → function returns 1
        - If number is not prime → function returns 0
*/


// Function Declaration (Prototype)
int check_prime(int n1);

int main()
{
    int num; 

    printf("Enter the num :");
    scanf("%d",&num);

    /*
        Function Call:
        The value entered by user is passed
        as actual argument to check_prime().
    */
    int flag = check_prime(num);

    /*
        If function returns 0 → Not Prime
        If function returns 1 → Prime
    */
    if (flag == 0 )
        printf("num is not prime \n");
    else
        printf("num is prime \n");
    
    return 0;
}


// Function Definition

/*
    check_prime()

    Logic:
        - Start checking divisibility from 2
        - Check until n1/2
        - If divisible by any number → Not Prime
        - If no divisor found → Prime

    Example:
        4 → divisible by 2 → return 0
        5 → not divisible by 2 → return 1
*/

int check_prime(int n1)
{
    int i = 2;   // Start checking from 2

    /*
        Loop condition:
            i <= n1/2

        Because:
            A number cannot have a factor greater
            than half of itself (except itself).
    */

    while( i <= n1/2)
    {
        /*
            If n1 is divisible by i,
            then it is NOT prime.
        */
        if(n1 % i == 0)
            return 0;   // Immediately return (not prime)

        i++;
    }

    /*
        If loop completes without returning 0,
        then number is prime.
    */
    return 1;   // Prime
}