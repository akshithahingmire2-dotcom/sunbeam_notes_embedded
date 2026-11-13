#include<stdio.h>
/*
	Relation in between Array and Pointer
	- Array name holds the base address of array.
	- Array elements are stored in contiguous memory locations.
	- Size of each element = sizeof(data type)
*/
int main()
{
	//               0    1    2     3   4    -> index 
	int arr[ 5 ] = { 10 , 20 , 30 , 40 , 50 };
	//              100  104  108  112   116  -> address

	//-------------------------------------------------------
	// Printing array elements and their addresses
	int i;
	for( i = 0 ; i < 5 ; i++)
	{
		printf("&arr[%d] = %lu \n",i,&arr[i]);
	}
	//-------------------------------------------------------

	// Arra name holds the base address of array
	printf("arr = %lu \n",arr);
	// arr is same as &arr[0]
	printf("&arr[0] = %lu \n",&arr[0]);

	// Array name can be used as pointer to first element
	int *ptr = arr;
	/*
		Value of array index                    Addres of array index   
		arr[0] == *(ptr + 0) == *(arr + 0)       &arr[0] == (ptr + 0) == (arr + 0)
		arr[1] == *(ptr + 1) == *(arr + 1)       &arr[1] == (ptr + 1) == (arr + 1)
		arr[2] == *(ptr + 2) == *(arr + 2)       &arr[2] == (ptr + 2) == (arr + 2)
		arr[3] == *(ptr + 3) == *(arr + 3)       &arr[3] == (ptr + 3) == (arr + 3)
		arr[4] == *(ptr + 4) == *(arr + 4)       &arr[4] == (ptr + 4) == (arr + 4)
	*/
		
	//-------------------------------------------------------
	// Printing array elements using pointer arithmetic

	// print address
	printf("Address of array elements : \n");

	printf("(arr + 0) = %lu \n",(arr + 0));
	printf("(arr + 1) = %lu \n",(arr + 1));
	printf("(arr + 2) = %lu \n",(arr + 2));	
	printf("(arr + 3) = %lu \n",(arr + 3));
	printf("(arr + 4) = %lu \n",(arr + 4));
	
	printf("Address of array elements using pointer variable : \n");
	printf("(ptr + 0) = %lu \n",(ptr + 0));
	printf("(ptr + 1) = %lu \n",(ptr + 1));
	printf("(ptr + 2) = %lu \n",(ptr + 2));	
	printf("(ptr + 3) = %lu \n",(ptr + 3));
	printf("(ptr + 4) = %lu \n",(ptr + 4));

	//----------------------------------------------------------
	
	// print value
	
	printf("Value of array elements : \n");
	printf("*(arr + 0) = %d \n",*(arr + 0));
	printf("*(arr + 1) = %d \n",*(arr + 1));
	printf("*(arr + 2) = %d \n",*(arr + 2));	
	printf("*(arr + 3) = %d \n",*(arr + 3));
	printf("*(arr + 4) = %d \n",*(arr + 4));

	printf("Value of array elements using pointer variable : \n");
	printf("*(ptr + 0) = %d \n",*(ptr + 0));
	printf("*(ptr + 1) = %d \n",*(ptr + 1));
	printf("*(ptr + 2) = %d \n",*(ptr + 2));	
	printf("*(ptr + 3) = %d \n",*(ptr + 3));
	printf("*(ptr + 4) = %d \n",*(ptr + 4));
	//----------------------------------------------------------
	return 0;
}









