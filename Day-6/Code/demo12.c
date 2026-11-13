#include<stdio.h>

/*
    Pointer in C

    Definition:
        - A pointer is a derived data type.
        - It stores the address of another variable.

    Important Unary Operators Used with Pointers:

        &  → Address-of operator
            Gives the memory address of a variable.

        *  → Value-at (Dereference) operator
            Accesses the value stored at that address.
*/

int main()
{
    int n1 = 10;

    /*
        n1 stores value 10.
        &n1 gives the memory address of n1.
    */
    printf("n1 = %d , &n1 = %lu \n", n1, &n1);


    /*
        Pointer Declaration:

            int *ptr;

        Means:
            ptr is a pointer to int.
            It can store address of an int variable.
    */

    int *ptr = &n1;

    /*
        ptr stores address of n1.
        *ptr accesses value stored at that address.
    */

    printf("*ptr : %d  ptr : %lu , &ptr : %lu \n",
            *ptr,   // Value at address (10)
            ptr,    // Address stored inside ptr (same as &n1)
            &ptr);  // Address of pointer variable itself

    return 0;
}