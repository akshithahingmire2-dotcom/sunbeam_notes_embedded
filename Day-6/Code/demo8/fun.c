/*
    extern Variable Example
    extern keyword:
        - Used to declare a global variable that is defined in another file.
        - Does NOT allocate memory.
        - Only informs compiler about its existence.
*/

extern int sum;
/*
    This is only a declaration.
    Memory for 'sum' must be defined
    in some other source file like:

        int sum = 0;

    Otherwise → Linker Error:
        "undefined reference to sum"
*/


int addition(int n1, int n2)
{
   //sum is a global variable defined in another file
    sum = n1 + n2; 

}