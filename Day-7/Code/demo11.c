#include<stdio.h>

/*
	ptr1 - ptr2

	Formula:

	(ptr1 - ptr2) 
	= (ptr1 - ptr2) / sizeof(data_type)

	Important:
	Pointer subtraction is valid only when:
	- Both pointers are of same type
	- Both point to elements of same array
*/

int main()
{
	/*
		Conceptual Example Only
		Assume:
			short int size = 2 bytes
	*/

	short int *shpptr1 = 100;   // Not valid in real program (demo purpose)
	short int *shpptr2 = 200;

	printf("shpptr2 - shpptr1 : %lu \n", shpptr2 - shpptr1); // 50
	/*
		Calculation conceptually:

		Address difference:
			200 - 100 = 100 bytes

		Divide by scale factor:
			100 / 2 = 50

		So result = 50
	*/


	//--------------------------------------------------------------------------------
	/*
		Invalid Pointer Operations
	*/

	// printf("shp2 + shp1 : %lu \n", shp2 + shp1 ); //  Error
	// printf("shp2 * shp1 : %lu \n", shp2 * shp1 ); //  Error
	// printf("shp2 / shp1 : %lu \n", shp2 / shp1 ); //  Error

	/*
		Allowed:
			ptr + n
			ptr - n
			ptr1 - ptr2  (same array)

		Not Allowed:
			ptr + ptr
			ptr * ptr
			ptr / ptr
	*/

	return 0;
}