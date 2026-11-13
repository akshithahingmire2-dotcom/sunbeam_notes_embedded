#include<stdio.h>
#include<stdlib.h>

/*
	Comparison function for integer sorting

	ptr1 and ptr2 are void pointers.
	They must be typecast to int* before dereferencing.

	Return value meaning for qsort():
	< 0  → first element smaller
	= 0  → elements equal
	> 0  → first element greater
*/

int compar1(const void *ptr1, const void *ptr2)
{
	return *(int*)ptr1 - *(int*)ptr2 ;
}

/*
	Comparison function for character sorting

	ptr1 and ptr2 are void pointers.
	They are typecast to char* and then dereferenced.
*/

int compar2(const void *ptr1, const void *ptr2)
{
	return *(char*)ptr1 - *(char*)ptr2 ;
}

int main()
{
	// Integer array
	int arr1[5]= {80 , 50 , 10 , 30 , 40 };
		
	int i;

	// Print array before sorting
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	
        /*
           qsort() → Quick sort function from stdlib.h

           Prototype:

           void qsort(void *base,
                      size_t nmemb,
                      size_t size,
                      int (*compar)(const void *, const void *));

           base   → base address of array
           nmemb  → number of elements
           size   → size of each element
           compar → address of comparison function
        */

	// Sorting integer array using qsort
	qsort(arr1, 5 , sizeof(int) , compar1 );

	// Print sorted integer array
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	
	//--------------------------------------------------------------------

	// Character array
	char arr2[5]= { 'X' , 'Y', 'A' , 'B','T'};
		
	// Print character array before sorting
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%c ",arr2[i]);
	}
	printf("\n");
	
        /*
           Using qsort again with different datatype
           Comparison function changes according to datatype
        */

	// Sorting character array using qsort
	qsort(arr2, 5 , sizeof(char) , compar2 );

	// Print sorted character array
	for(i = 0 ; i < 5 ; i++)
	{
		printf("%c ",arr2[i]);
	}
	printf("\n");
	return 0;
}