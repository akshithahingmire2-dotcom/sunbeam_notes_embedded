#include<stdio.h>

/*
    Example 1:

    void fun()
    {
        printf("one\n");
        return;   // Jump statement
        printf("Two");
    }

    Explanation:
        - return immediately exits the function.
        - Any statement written after return
          will NOT execute (unreachable code).
*/


/*
    Example 2:
    Demonstrating return with comma operator.
*/

int fun()
{
    /*
        return 10,20,30;

        Due to comma operator rules:
            Expression is evaluated left to right.
            Final value of expression is returned.
        Final value returned = 30
    */

    // return (10,20,30);  // Returns 30
}

int fun()
{

	int num = 10;

    /*
        return num++, num++, num++;

        Comma operator behavior:
        - Evaluate expressions left to right
        - Return value of LAST expression
    */

    return num++, num++, num++;
	//     10++, 11++, 12++
	//     10,   11,   12
	//     Final value returned = 12
}


int main()
{
    int num = fun();   // Function call

    printf("num = %d \n", num);

    return 0;
}