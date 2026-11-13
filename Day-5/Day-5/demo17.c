#include<stdio.h>

/*
    Program: Simple Recursion Example

    Objective:
        Print numbers from n to 1 using recursion.

    Example:
        Input  : 5
        Output : 5 4 3 2 1
*/


// Function Declaration (Prototype)
void fun_rec(int n);

int main()
{
    int num = 5;

    // Function Call
    fun_rec(num);

    printf("\n");

    return 0;
}


/*
    Function Definition

    Recursive Function:
        A function that calls itself.
*/

void fun_rec(int n)
{
    /*
        Terminating Condition (Base Case)

        Recursion must have a stopping condition,
        otherwise it will result in infinite recursion
        and stack overflow.
    */
    if (n <= 0)
        return;

    /*
        Work before recursive call
        (This prints numbers in descending order)
		i.e., 5 → 4 → 3 → 2 → 1
    */
    printf("%d ", n);


    //Recursive Call
    fun_rec(n - 1); //Each call reduces the value of n by 1

    /*
        If we uncomment below printf,
        output becomes ascending order (1 to 5)
		i.e., 1 → 2 → 3 → 4 → 5
		This is because work is done after recursive call.
    */
    // printf("%d ", n);
}