#include<stdio.h>

/*
    Command Line Arguments
    ----------------------

    Command line arguments allow passing data to a program
    when it is executed from the command line.

    Example execution:

        $ ./a.out one two three four

    Argument indexing:

        argv[0] → ./a.out   (program name)
        argv[1] → one
        argv[2] → two
        argv[3] → three
        argv[4] → four

    argc → Argument Count
           Total number of command line arguments
           (including the program name).

    In the above example:
        argc = 5

    main() with command line arguments:

        int main( int argc , char *argv[] , char *env[])

    argv → Argument Vector
           Array of pointers to strings storing arguments.

        char *argv[] = { "./a.out", "one", "two", "three", "four", NULL }
                             0        1      2      3       4       5

    env → Environment variables provided by the operating system.
           These include variables like:

                PATH
                HOME
                USER
                SHELL
*/

int main( int argc , char *argv[] , char *env[])
{
	printf("Arg count :   %d \n",argc);
	// prints number of command line arguments

	printf("arr[0]  :  Name of prog : %s \n",argv[0]);
	// argv[0] always contains the program name

	int i=0;

	// Loop through environment variables
	// env[] is an array of pointers to strings
	// The last element of env[] is NULL

	//for(i = 0 ; i < argc ; i++)
	for(i=0 ; env[i] != NULL ; i++)
	{
		printf("env[%d] : %s \n",i , env[i]);
		// prints environment variable strings
	}

	return 0;
}