#include<stdio.h>

/*
    Program: Check whether a number is Palindrome or Not

    Input  : 123
    Reverse: 321

    Logic:
        If (original number == reversed number)
            → Palindrome
        Else
            → Not Palindrome


    Dry Run Example (num = 123)

        num  = 123
        temp = num
        rev  = 0

        Step 1:
            rem = 123 % 10  → 3
            rev = 0 * 10 + 3  → 3
            num = 123 / 10 → 12

        Step 2:
            rem = 12 % 10 → 2
            rev = 3 * 10 + 2 → 32
            num = 12 / 10 → 1

        Step 3:
            rem = 1 % 10 → 1
            rev = 32 * 10 + 1 → 321
            num = 1 / 10 → 0

        Loop stops when num becomes 0
*/

int main()
{
    int num, rem, rev = 0;   // num = input, rem = last digit, rev = reversed number

    printf("Enter the num : ");
    scanf("%d",&num);   // Example input: 123

    int temp = num;     // Store original number for comparison

    /*
        Loop continues until num becomes 0

            123 != 0 → True
             12 != 0 → True
              1 != 0 → True
              0 != 0 → False (loop terminates)
    */

    while( num != 0 )
    {
        rem = num % 10;      // Extract last digit

        /*
            Example:
                123 % 10 → 3
                 12 % 10 → 2
                  1 % 10 → 1
        */

        rev = rev * 10 + rem;   // Build reversed number

        /*
            0  * 10 + 3 → 3
            3  * 10 + 2 → 32
            32 * 10 + 1 → 321
        */

        num = num / 10;     // Remove last digit

        /*
            123 / 10 → 12
             12 / 10 → 1
              1 / 10 → 0
        */
    }

    // Compare reversed number with original number
    if (rev == temp)
        printf("Num is palindrome : %d \n",temp);
    else
        printf("Num is not palindrome : %d \n",temp);

    return 0;   // Program completed successfully
}