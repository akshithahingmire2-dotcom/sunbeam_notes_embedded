#include<stdio.h>

/*
    Command Line Arguments
    ----------------------

    Command line arguments are used to pass data to a program
    at the time of execution from the command line.

    Example execution:

    $ ./a.out one two three four

    Indexing of arguments:

        argv[0] → ./a.out   (program name)
        argv[1] → one
        argv[2] → two
        argv[3] → three
        argv[4] → four

    argc → Argument Count
           Total number of command line arguments including program name.

    In this example:
        argc = 5

    main() with command line arguments:

        int main( int argc , char *argv[] , char *env[])

    argv → Argument Vector
           Array of pointers to strings that store command line arguments.

        char * argv[] = { "./a.out","one","two","three","four" , NULL }

                         0        1     2      3       4       5

    env → Environment variables provided by the OS.
*/

int main( int argc , char *argv[] , char *env[])
{
	printf("Arg count :   %d \n",argc);
	// prints number of command line arguments

	printf("arr[0]  :  Name of prog : %s \n",argv[0]);
	// argv[0] always stores program name

	int i=0;

	// Loop to print all command line arguments

	//for(i = 0 ; i < argc ; i++)

	// Alternative method using NULL termination
	for(i=0 ; argv[i] != NULL ; i++)
	{
		printf("argv[%d] : %s \n",i , argv[i]);
		// prints each argument
	}

	return 0;
}