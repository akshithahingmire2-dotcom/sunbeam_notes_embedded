#include<stdio.h>   // Header file that contains declaration of printf()
// # include is a preprocessor directive that tells the compiler to include the contents of the specified file before compilation
/*
    Program : First C Program
    Purpose : To understand structure of C program
              and print output on console.
*/

// main() is the entry point of every C program
// Program execution always starts from main()
int main()
{
    printf("Hello World\n");   // printf() is a library function used to display output
                               //  ; is used to terminate a statement in C


    return 0;   // return statement sends value back to Operating System
                // 0 means successful execution
}

/*
To compile => gcc demo1.c -o demo1.out
To run     => ./demo1.out
*/