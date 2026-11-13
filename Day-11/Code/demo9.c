#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num=10;

	/*
	enum rules:

	1. Enumerator values must be constant integer expressions.
	2. Variables cannot be used to initialize enum fields.
	3. If value is not given, compiler assigns the next integer value.
	*/

	//enum demo{ NUM1 , NUM2=num, NUM3 }; // Error because 'num' is a variable, not a constant expression.
	//          0       10       11


	//enum demo{ NUM1 , NUM2=10, NUM3 }; // OK
	//          0       10      11
	// If a value is assigned, next enumerator gets previous + 1.


	//enum demo{ NUM1 , NUM2=10.2, NUM3 };
	//          0      10        11
	// 10.2 is converted to integer (10) because enum values are integers.


	//enum demo{ NUM1 , NUM2='A', NUM3 };
	//          0       65      66
	// Character constants are allowed (ASCII value used).


/*	
	enum demo{ NUM1 , NUM2, NUM3 };

	typedef enum demo DEMO;

	DEMO d1,d2;   // variables using typedef alias
*/


/*	
	enum demo{ NUM1 , NUM2, NUM3 }d10 ; // d10 variable declared here

	typedef enum demo1{ NUM10 , NUM20, NUM30} DEMO1; // DEMO1 is alias for enum demo1

	DEMO1 d5,d6;
*/

/*
	enum demo{ NUM1=10 , NUM2, NUM3 }d10 ; // variable of enum type
	//           10        11    12
	// Error : Two enums cannot have same enumerator names (NUM1, NUM2, NUM3) 
	//         even if they are in different enum types.
	typedef enum demo1{ NUM1 , NUM2, NUM3} DEMO1;
	//                   0      1     2
*/

	typedef enum demo1{ NUM1 , NUM2, NUM3} DEMO1;
	//                   0      1     2
	DEMO1 d5,d6;

	/*
	Printing enum constant value
	*/

	printf("NUM1 : %d \n",NUM1); // prints value of NUM1 from last enum

	return 0;
}