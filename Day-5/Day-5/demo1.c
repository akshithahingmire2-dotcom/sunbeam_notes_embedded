#include<stdio.h>

/*
    Program: Print Prime Factors of a Given Number

    Input:
        180

    Output (Prime Factors):
        2  2  3  3  5

    Explanation:
        180 = 2 × 2 × 3 × 3 × 5

    Logic:
        - Start dividing the number from 2 onwards.
        - If number is divisible by i:
              print i
              divide number by i
        - Else:
              increment i
        - Repeat until number becomes 1
*/

int main()
{
    int num, rem, qut, i;

    printf("Enter the num : ");
    scanf("%d",&num);   // Example: 180

    i = 2;   // Start checking factors from smallest prime number (2)

    /*
        Loop continues until num becomes 1

        Example: Dry Run for 180:

            180 % 2 == 0 → print 2 → num = 90
             90 % 2 == 0 → print 2 → num = 45
             45 % 2 != 0 → i = 3
             45 % 3 == 0 → print 3 → num = 15
             15 % 3 == 0 → print 3 → num = 5
              5 % 3 != 0 → i = 4
              5 % 4 != 0 → i = 5
              5 % 5 == 0 → print 5 → num = 1 → loop stops
    */

    while( num > 1 )   // Continue until number reduces to 1
    {
        if( num % i == 0 )   // Check if i is a factor
        {
            printf(" %d ", i);   // Print factor

            num = num / i;      // Reduce number

            // Do NOT increment i here
            // Because same factor may repeat (e.g., 2, 2 or 3, 3)
        }
        else
        {
            ++i;   // Move to next possible factor
        }
    }

    return 0;   
}