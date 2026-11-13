#include<stdio.h>

/*
    Program: Simple Password Authentication using do-while loop

    Admin Password : 123456

    Logic:
        - Ask user to enter password
        - If password is correct → Login successful
        - If password is wrong → Ask again
        - Repeat until correct password is entered

    Concept Used:
        do-while loop (Exit-controlled loop)
        → Loop runs at least once
*/

int main()
{
    int Admin = 123456;   // Stored admin password (correct password)
    int passkey;          // Variable to store user input

    /*
        do-while is used because:
        - We must ask for password at least once
        - Condition is checked after execution
    */

    do
    {
        printf("Enter the Password : ");
        scanf("%d",&passkey);   // Accept password from user

        if(passkey == Admin )
        {
            printf("Login Su;cessfully...\n");   // Correct password
        }
        else
        {
            printf("Try again...\n");   // Incorrect password
        }

    }while(passkey != Admin );   // Continue until correct password is entered

    return 0;   // Program ends after successful login
}
