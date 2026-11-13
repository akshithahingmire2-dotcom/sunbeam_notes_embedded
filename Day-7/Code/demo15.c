#include<stdio.h>


/*
	Pass Array to Function

	Important:
	- Array name represents base address.
	- When passed to function, array decays to pointer.
	- Changes inside function affect original array.
*/


void accept_arr( float *ptr , int size );
void print_arr( float *ptr , int size );
int main()
{
		      //     0    1    2    3    4  ->index
	float arr[5]; //  { 1.1  2.2   3.3  4.4  5.5 } -> values            };
		      //    100  104  108  112  116 -> address of index

	// When we pass array to function, we actually pass address of first element.
	// So we can use pointer in function to accept array.
	
	// Passing array to function:
	// arr  → base address (100)
	// 5    → size of array
	accept_arr(arr , 5 ); 

	//         100   5
	print_arr(arr , 5);
		
	return 0;
}

//---------------------------------------------------------------------
/*
	Function to print array
	ptr = base address of arr
	size = number of elements
*/

//                ptr = 100      5
void print_arr( float *ptr , int size )
{
	int i;
	printf("Print the array..\n");
	for( i = 0 ; i < size ; i++)
	{
		//printf("ptr[%d] = %d \n",i,ptr[i]); // ok -> [] array notation
		//or
		printf(" *(ptr + %d ) = %.2f \n",i, *(ptr + i));// Pointer arithmetic notation
		//                                *(100 + 0) => *(100) => 1.1
		//                                *(100 + 1) => *(104) => 2.2
		//                                *(100 + 2) => *(108) => 3.3
		//                                *(100 + 3) => *(112) => 4.4
		//                                *(100 + 4) => *(116) => 5.5
	}
}


/*
	Function to accept array values
	ptr = base address of arr
*/
//                 ptr= 100 ,
void accept_arr( float *ptr , int size )
{
	int i;
	printf("Sacn the array..\n");
	for( i = 0 ; i < size ; i++)
	{
		printf("Enter the %d index value : ",i);
		//scanf("%f",&ptr[i]); // ok -> [] array notation
		//or
		scanf("%f", ( ptr + i )); // Pointer arithmetic notation
		//                              (100 + 0) => 100
		//                              (100 + 1) => 104
		//                              (100 + 2) => 108
		//                              (100 + 3) => 112
		//                              (100 + 4) => 116
	}
}

//---------------------------------------------------------------------





