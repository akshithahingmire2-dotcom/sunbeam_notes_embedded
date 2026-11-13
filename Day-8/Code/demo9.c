#include<stdio.h>
#include<string.h>

/*
String handling functions
    1. strlen
        - return the length of string
    2. strcpy
        - copy the string from source to destination
    3. strcat
        - concatenate the string
    4. strcmp
        - compare two string
    5. stricmp
        - compare two string without case sensitivity
    6. strlwr
        - convert string to lower case
    7. strupr
        - convert string to upper case
    8. strrev
        - reverse the string
    9. strchr
        - search character in string
    10. strstr
        - search substring in string
*/

// Implementation of strlen function
unsigned int my_strlen(char *str);

int main()
{
    char str1[20] = "Sunbeam";
    
    int len = strlen(str1); // call to library function

    //int len1 = my_strlen(str1); // call to user defined function

    //printf("len : %d \n",len); // 7
    //printf("size of str : %lu \n",sizeof(str1)); //20
    
    return 0;
}

unsigned int my_strlen(char *str)
{
    int i;
    for(i = 0 ; str[i] != '\0' ; i++);
    return i;
}