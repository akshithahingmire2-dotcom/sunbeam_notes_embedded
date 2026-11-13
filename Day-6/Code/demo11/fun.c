#include "header.h"


// static function declaration (internal linkage)
static int accept();


/*
    addition()

    - External function (default external linkage)
    - Can be used by other files
    - Calls private helper function accept()
    - Returns sum of two numbers
*/

int addition()
{
    int n1 = accept();   // First user input
    int n2 = accept();   // Second user input

    int sum = n1 + n2;

    return sum;   // Return result to calling function
}


/*
    Definition of static function: accept()

    Properties:
        - Internal linkage
        - Visible only inside this source file
        - Used as helper function

    Why static?
        - Prevents external access
        - Avoids name conflicts in large projects
        - Implements modular design
*/

static int accept()
{
    int num;   // Local variable (stored in stack)

    printf("Enter num : ");
    scanf("%d", &num);

    return num;   // Return input value
}