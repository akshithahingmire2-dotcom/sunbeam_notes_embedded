#include<stdio.h>

/*
	1-D  Array
		- Array is a collection of elements of same data type stored in contiguous memory locations.
		- It allows us to store multiple values in a single variable.
		- Each element can be accessed using its index.
		- index starts from 0 to (size-1).
	Syntax:

	Array Declaration:
		<Data_type> <arr_name>[size];

	Array Declaration + Definition:
		<Data_type> <arr_name>[size] = { values separated by comma };

	Access Array Element:
		arr[index]       → value at index
		&arr[index]      → address of that index
*/

int main()
{
	//              0    1    2    3    4   ->   Index
	int arr[5] = { 11,  22,  33,  44,  55 }; //-> Values
	//             100  104  108  112  116 ->    Addresses 

	/*
		Array properties:
		- Index always starts from 0
		- Array elements are stored in contiguous memory
		- Size of each element = sizeof(int)
	*/

	printf("arr[0] : %d \n", arr[0]); // 11
	printf("arr[1] : %d \n", arr[1]); // 22
	printf("arr[2] : %d \n", arr[2]); // 33
	printf("arr[3] : %d \n", arr[3]); // 44
	printf("arr[4] : %d \n", arr[4]); // 55

	
	//Modifying array values
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	printf("arr[0] : %d \n", arr[0]); // 10
	printf("arr[1] : %d \n", arr[1]); // 20
	printf("arr[2] : %d \n", arr[2]); // 30
	printf("arr[3] : %d \n", arr[3]); // 40
	printf("arr[4] : %d \n", arr[4]); // 50

	//Using loop to access array elements
	int i;
	for(i = 0; i < 5; i++)   // i = 0 to 4
	{
		printf("arr[%d] : %d \n", i, arr[i]); // arr[0] to arr[4]
	}

	//printing size of array
	printf("sizeof(arr) = %d\n", sizeof(arr)); // 5 * 4 = 20 bytes

	return 0;
}