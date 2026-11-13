#include<stdio.h>

/*
    Demonstration:
        - Function scope
        - Block scope
        - Variable redeclaration
*/

int fun()
{
    int num = 10;   // Local variable (scope limited to fun())
}


int main()
{
	//-------------------------------------------------------------------------
    int num1 = 10;

    // int num1 = 10;  // ERROR
    // Redeclaration of num1 in same block is not allowed.

    {
        /*
            New inner block scope.
            This creates a NEW variable num1.
            It shadows (hides) outer num1.
        */
        int num1 = 20;   // Allowed (different block scope)

        printf("num1 : %d \n", num1);  // Prints 20
    }

    /*
        After inner block ends,
        inner num1 is destroyed.

        Outer num1 (value 10) still exists.
    */
	//-------------------------------------------------------------------------
	
	fun(); // Function call to fun()

    /*
        printf("num : %d \n",num);  // ERROR

        num is declared inside fun().
        Scope of num is limited to fun().
        main() cannot access it.
    */

    return 0;
}