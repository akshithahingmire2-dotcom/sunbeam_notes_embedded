#include<stdio.h>
// Format specifier precision for float and double data type
int main()
{
	float f1 = 3.123;
	// By default 6 digit after decimal point will be printed for float and double data type
	printf("f1=%f \n",f1);//3.123000
	
	// If you want to print specific digit after decimal point then you can use precision with format specifier
	printf("f1=%.3f \n",f1); //3.123 // here .3 means 3 digit after decimal point will be printed and remaining digit will be rounded off

	// If you want to print specific width and specific digit after decimal point then you can use width and precision with format specifier
	printf("f1=%10f  \n",f1);// here 10 is the width of format specifier which means total 10 character space will be reserved for f1 and 3.123 will be printed in that space and remaining space will be filled with blank space
	//      f1=__________
	//           3.142000

	printf("f1=%10.3f \n",f1);
        //      f1=_________
	//             3.142
	return 0;
}
