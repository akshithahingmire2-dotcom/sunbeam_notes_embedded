#include<stdio.h>

/*
    Program: Check whether a number is Prime or Not

    Definition:
        A Prime number has only two factors:
            1 and the number itself

    Examples:
        11 → Prime      (1, 11)
        12 → Not Prime  (1, 2, 3, 4, 6, 12)

    Logic:
        - Start checking divisibility from 2
        - If any number divides num completely
              → Not Prime
        - If no divisor found
              → Prime
*/

int main()
{
    int num, i;

    printf("Enter the num :");
    scanf("%d",&num);   // Example: 12

    int flag = 0;   // flag = 0 → assume prime
                    // flag = 1 → not prime

    i = 2;   // Start checking from 2

    /*
        We check till num/2 because:
        - A number cannot have a factor greater than num/2
          (except the number itself)

        Example for 12:
            num/2 = 6
            So check from 2 to 5

        Condition:
            i < num/2
    */

    while(i < num/2)
    {
        /*
            If num is divisible by i,
            then it is NOT prime
        */

        if(num % i == 0 )
        {
            flag = 1;   // Mark as not prime
            break;      // Stop checking further
        }

        i++;   // Move to next possible divisor
              // 2 → 3 → 4 → 5 → 6
    }

    // Final decision based on flag
    if (flag == 1)
        printf("Num is not prime : %d \n",num);
    else
        printf("Num is prime : %d \n",num);

    return 0;   // Program completed successfully
}