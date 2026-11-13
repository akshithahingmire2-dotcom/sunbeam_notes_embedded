#include<stdio.h>
#include<math.h>

/*
    Program: Check whether a number is Armstrong or Not

    Definition:
        An Armstrong number is a number that is equal to
        the sum of its digits raised to the power of
        the total number of digits.

    Example 1:
        Input : 153  (3-digit number)

        Digits: 1  5  3
        Calculation:
            (1^3) + (5^3) + (3^3)
            1 + 125 + 27 = 153  → Armstrong

    Example 2:
        Input : 1992 (4-digit number)

        Digits: 1  9  9  2
        Calculation:
            (1^4) + (9^4) + (9^4) + (2^4)
			1 + 6561 + 6561 + 16 = 13139 → Not Armstrong

	Logic:
		Step 1: Count number of digits (cnt)
		Step 2: Calculate sum of digits raised to cnt (arm)
		Step 3: Compare original number with arm
*/

int main()
{
    int num, cnt = 0, temp;

    printf("Enter num : ");
    scanf("%d",&num);   // Example input: 153

    temp = num;   // Store original number

    int rem;

    /*
        Step 1: Count number of digits

        Logic:
            Extract digits using % 10
            Remove digits using / 10
            Increment counter each time
    */

    do
    {
        rem = num % 10;   // Extract last digit
        cnt++;            // Increase digit count
        num = num / 10;   // Remove last digit

    }while( num > 0);

    printf("cnt %d : %d \n",temp,cnt);	

    /*
        Step 2: Calculate Armstrong sum

        Reset num to original value
    */

    num = temp;
    int arm = 0;   // Variable to store Armstrong sum

    do
    {
        rem = num % 10;                     // Extract digit
        arm = arm + pow(rem ,cnt);          // Add digit^count
        num = num / 10;                     // Remove digit

    }while(num > 0);

    /*
        Step 3: Compare original number with Armstrong sum
    */

    if( temp == arm )
    {
        printf("Armstrong..\n");
    } 
    else
    {
        printf("Not Armstrong..\n");
    }

    return 0;   
}
/*
compile  : gcc demo.c -o demo.out -lm
execute  : ./demo.out
*/


