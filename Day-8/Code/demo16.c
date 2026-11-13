#include<stdio.h>
#include<string.h>


/*
    -- -----------------------------------------------------------------------
    strcmp() and stricmp()
    -------------------------------------------------------------------------
    strlwr()
    - Used to convert all uppercase letters in a string to lowercase.
    Prototype:
        char *strlwr(char *str);
    Return Value:
        Returns pointer to the modified string (lowercase string).
    -------------------------------------------------------------------------------
    strupr()
    - Used to convert all lowercase letters in a string to uppercase.
    Prototype:
        char *strupr(char *str);
    Return Value:
        Returns pointer to the modified string (uppercase string).
    -------------------------------------------------------------------------------
        
*/

char *my_strlwr(char *str);
char *my_strupr(char *str);

int main()
{
    char str1[20] = "Sunbeam";

    // Convert str1 to lowercase using library function
    strlwr(str1);
    printf("Lowercase string (library) : %s \n", str1); // sunbeam

    char str2[20] = "Infotech";
    // Convert str2 to lowercase using user-defined function
    my_strlwr(str2); //
    printf("Lowercase string (user-defined) : %s \n", str2);// infotech

    char str3[20] = "Sunbeam";
    // Convert str3 to uppercase using library function
    strupr(str3);
    printf("Uppercase string (library) : %s \n", str3); // SUNBEAM


    return 0;
}
//---------------------------------------------------------------
char *my_strlwr(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        // If character is uppercase letter, convert to lowercase
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + ('a' - 'A'); // convert to lowercase by adding ASCII difference
    }
    return str; // return base address of modified string
}
//---------------------------------------------------------------
char *my_strupr(char *str)
{
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        // If character is lowercase letter, convert to uppercase
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A'); // convert to uppercase by subtracting ASCII difference
    }
    return str; // return base address of modified string
}
//---------------------------------------------------------------