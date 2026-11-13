#include<stdio.h>
#include<stdlib.h>

/*
	Enum (Enumeration) – User Defined Data Type
	-------------------------------------------
	- enum is used to create a user-defined data type.
	- It consists of a collection of named integer constants
	  called enumerators.
	- Each enumerator represents an integer value.
	- By default, the first enumerator has value 0 and the next
	  values increase by 1 automatically.
	- It improves readability and maintainability of code.

	Syntax:
	enum <tag_name> { enumerator1, enumerator2, ... };

	Example:
	enum colors { RED, BLUE, GREEN };
*/

int main()
{
	/*
	Declaring an enum type with enumerators
	*/
	enum colour{ RED ,BLUE ,GREEN , YELLO ,BLACK,WHITE , PINK };
	//            0    1      2      3      4      5       6
	// default integer values assigned automatically

	printf("RED : %d \n",RED);   // prints 0
	printf("BLUE : %d \n",BLUE); // prints 1
	//...
	printf("PINK : %d \n",PINK); // prints 6

	/*
	enum colour → user defined data type
	clr1        → variable of enum type
	*/

	enum colour clr1;

	/*
	sizeof(enum colour)
	Usually enum occupies same memory as int (commonly 4 bytes)
	*/

	printf("size of enum : %u \n",sizeof(enum colour)); // usually 4
	printf("size of clr : %u \n",sizeof(clr1));         // usually 4

	/*
	enum variables store integer values corresponding
	to enumerated constants.
	*/

	clr1 = RED + BLUE ;
	//      0  +  1

	printf("clr1 : %d \n",clr1);// prints 1

	return 0;
}